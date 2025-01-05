#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main(){
    mp["apple"] = 3;
    mp["banana"] = 2;
    mp["orange"] = 5;

    // 값 출력
    cout << "Items in the map:" << endl;
    for (const auto& pair : mp) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 특정 키의 값 검색
    string key = "banana";
    if (mp.find(key) != mp.end()) {
        cout << "The value associated with '" << key << "' is " << mp[key] << endl;
    } else {
        cout << "Key '" << key << "' not found in the map." << endl;
    }
    return 0;
}