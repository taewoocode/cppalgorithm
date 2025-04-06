#include<bits/stdc++.h>
using namespace std;

int start = -1;
int end_ = -1;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2){
            if(start == -1){
                start = i;
            }
            end_ = i;
        }
    }

    for(int i = start; i <= end_; i++){
        answer.push_back(arr[i]);
    }

    return answer;

}