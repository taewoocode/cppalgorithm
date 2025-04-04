#include <string>
#include <vector>
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;

    if (n == 1) {
        // num_list의 0번 인덱스부터 slicer[1]번 인덱스까지 슬라이싱
        answer = vector<int>(num_list.begin(), num_list.begin() + slicer[1] + 1);
    } 
    else if (n == 2) {
        // num_list의 slicer[0]번 인덱스부터 마지막 인덱스까지 슬라이싱
        answer = vector<int>(num_list.begin() + slicer[0], num_list.end());
    }
    else if (n == 3) {
        // num_list의 slicer[0]번 인덱스부터 slicer[1]번 인덱스까지 슬라이싱
        answer = vector<int>(num_list.begin() + slicer[0], num_list.begin() + slicer[1] + 1);
    }
    else if (n == 4) {
        // num_list의 slicer[0]번 인덱스부터 slicer[1]번 인덱스까지 slicer[2] 간격으로 슬라이싱
        for (int i = slicer[0]; i <= slicer[1]; i += slicer[2]) {
            answer.push_back(num_list[i]);
        }
    }

    return answer;
}

#include <string>
#include <vector>
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;

    if (n == 1) {
        answer = vector<int>(num_list.begin(), num_list.begin() + slicer[1] + 1);
    } 
    else if (n == 2) {
        answer = vector<int>(num_list.begin() + slicer[0], num_list.end());
    }
    else if (n == 3) {
        answer = vector<int>(num_list.begin() + slicer[0], num_list.begin() + slicer[1] + 1);
    }
    else if (n == 4) {
        for (int i = slicer[0]; i <= slicer[1]; i += slicer[2]) {
            answer.push_back(num_list[i]);
        }
    }

    return answer;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    // 각 문자가 나타날 때 최소 누를 횟수를 저장하는 맵
    unordered_map<char, int> keypress_count;
    
    // keymap에서 각 문자에 대해 최소 누를 횟수 계산
    for (int i = 0; i < keymap.size(); i++) {
        for (int j = 0; j < keymap[i].size(); j++) {
            char c = keymap[i][j];
            if (keypress_count.find(c) == keypress_count.end()) {
                keypress_count[c] = j + 1;  // 첫번째로 나오는 횟수
            } else {
                keypress_count[c] = min(keypress_count[c], j + 1);  // 최소 횟수로 업데이트
            }
        }
    }

    // targets에 대해 계산
    for (const string& target : targets) {
        int total_count = 0;
        bool possible = true;

        // 목표 문자열의 각 문자가 keymap에서 가능한지 확인하고 누를 횟수 계산
        for (char c : target) {
            if (keypress_count.find(c) == keypress_count.end()) {
                possible = false;
                break;
            }
            total_count += keypress_count[c];
        }

        if (possible) {
            answer.push_back(total_count);
        } else {
            answer.push_back(-1);
        }
    }
    
    return answer;
}
