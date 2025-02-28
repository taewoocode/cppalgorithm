#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    //원소를 5면 5를 5개 추가, 1이면 1 4면 4
    // [5,5,5,5,5,1,4,4,4,4]
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i]; j++){ //arr[i]만큼 반복
            answer.push_back(arr[i]);
        }
    }
    return answer;
}


int main(){
    vector<int> arr {5,1,4};
    vector<int> answer = solution(arr);
    for(auto num : answer){
        cout << num << ' ';
    }

    return 0;
}