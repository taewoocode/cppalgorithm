#include <string>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        if(flag[i]){
            for(int j = 0; j < arr[i] * 2; j++){
                answer.push_back(arr[i]);
            }
        } else {
            for(int j = 0; j < arr.size(); j++){
                answer.pop_back();
            }
        }
    }
    return answer;
}