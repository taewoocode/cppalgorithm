#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <cmath>
#include <algorithm>

using namespace std; 

struct Entry {
    string key;
    int value;
    Entry* next;

    Entry(const string& k, int v) : key(k), value(v), next(nullptr) {}
};

class MyUnorderedMap {

private:
    vector<Entry*> table;
    size_t _size = 0;
    size_t _bucket_count = 16; // 초기 버킷 크기
    const float MAX_LOAD_FACTOR = 0.75f; // 부하율 임계값

    size_t hash_function(const string& key) const {
        size_t hash_val = 0;
        for (char ch : key) {
            hash_val = (hash_val * 31) + ch;
        }
        return hash_val;
    }

    size_t get_bucket_index(const string& key) const {
        return hash_function(key) % _bucket_count;
    }

    void rehash(size_t new_bucket_count) {
        vector<Entry*> old_table = table;
        size_t old_count = _bucket_count;

        _bucket_count = new_bucket_count;
        table.assign(_bucket_count, nullptr);
        _size = 0; 

        cout << "--- REHASHING: 새 크기 " << _bucket_count << "로 리해싱 시작 ---\n";

        for (size_t i = 0; i < old_count; ++i) {
            Entry* current = old_table[i];
            while (current != nullptr) {
                Entry* temp = current;
                current = current->next;
                
            
                temp->next = nullptr;
                insert_internal(temp); 
                
            }
        }
        cout << "--- REHASHING 완료 ---\n";
    }

    void insert_internal(Entry* entry) {
        size_t index = get_bucket_index(entry->key);
        
        entry->next = table[index];
        table[index] = entry;
        _size++;
    }

public:
    MyUnorderedMap() {
        table.resize(_bucket_count, nullptr);
    }
    
    ~MyUnorderedMap() {
        for (size_t i = 0; i < _bucket_count; ++i) {
            Entry* current = table[i];
            while (current != nullptr) {
                Entry* to_delete = current;
                current = current->next;
                delete to_delete;
            }
        }
    }

    void insert(const string& key, int value) {
        size_t index = get_bucket_index(key);
        Entry* current = table[index];

        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }

        Entry* new_entry = new Entry(key, value);
        new_entry->next = table[index];
        table[index] = new_entry;
        _size++;

        if ((float)_size / _bucket_count > MAX_LOAD_FACTOR) {
            rehash(_bucket_count * 2); 
        }
    }

    int& operator[](const string& key) {
        size_t index = get_bucket_index(key);
        Entry* current = table[index];

        while (current != nullptr) {
            if (current->key == key) {
                return current->value; 
            }
            current = current->next;
        }

        insert(key, 0); 
        
        index = get_bucket_index(key); 
        return table[index]->value;
    }

    bool erase(const string& key) {
        size_t index = get_bucket_index(key);
        Entry* current = table[index];
        Entry* prev = nullptr;

        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                
                delete current; // 메모리 해제
                _size--;
                // cout << "ERASE: Key \"" << key << "\" 삭제 완료.\n"; 
                return true; // 삭제 성공
            }
            prev = current;
            current = current->next;
        }
        // cout << "ERASE: Key \"" << key << "\"를 찾지 못했습니다.\n";
        return false; // 삭제 실패 (키 없음)
    }

    size_t size() const { return _size; }
    size_t bucket_count() const { return _bucket_count; }
    float load_factor() const { return (float)_size / _bucket_count; }

    void print_status() const {
        cout << "\n--- MyUnorderedMap 상태 ---\n";
        cout << "총 원소 수 (_size): " << _size << endl;
        cout << "버킷 크기 (count): " << _bucket_count << endl;
        cout << "부하율 (load factor): " << load_factor() << endl;
        
        for (size_t i = 0; i < min((size_t)10, _bucket_count); ++i) { // 처음 10개만 출력
            cout << "버킷 [" << i << "]: ";
            Entry* current = table[i];
            int chain_len = 0;
            while (current != nullptr) {
                cout << "(" << current->key << ": " << current->value << ")";
                if (current->next != nullptr) cout << " -> ";
                current = current->next;
                chain_len++;
            }
            if (chain_len == 0) cout << "(비어 있음)";
            cout << " (길이: " << chain_len << ")\n";
        }
        cout << "---------------------------\n";
    }
};

int main() {
    MyUnorderedMap my_map;
    
    cout << "--- 1. 데이터 삽입 및 부하율 테스트 ---\n";
    for (int i = 0; i < 12; ++i) {
        my_map.insert("Key" + to_string(i), i * 10);
    }

    my_map.print_status();

    my_map["Key15"] = 150;
    my_map.insert("Key16", 160);
    my_map.print_status();

    cout << "\n--- 2. 데이터 검색 및 업데이트 ---\n";
    try {
        my_map["Key5"] = 555; 
        cout << "Key5의 새 값: " << my_map["Key5"] << endl;

        cout << "Key99의 기존 값: " << my_map["Key99"] << endl;
        my_map["Key99"] = 999;
        cout << "Key99의 업데이트된 값: " << my_map["Key99"] << endl;
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }

    my_map.print_status();

    cout << "\n--- 3. 데이터 삭제 ---\n";
    my_map.erase("Key1");
    my_map.erase("Key5");
    my_map.erase("NonExistentKey");

    my_map.print_status();

    return 0;
}