#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> prev = arr;
    while(true){
        for(int i = 0; i < arr.size(); i++){
        //각 원소에 대해 값이 50보다 크거나 같으면 2로 나누고
        if(arr[i] >= 50 && arr[i] % 2 == 0){
                arr[i] /= 2;
        } else if(arr[i] <= 50 && arr[i] % 2 != 0){
                arr[i] = (arr[i] * 2) + 1;
            }
        }
        if(arr == prev) break;
        answer++;
    }
    return answer;
}