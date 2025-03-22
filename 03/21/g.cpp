#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> arr, int idx){
    for(int i = idx + 1; i < arr.size(); i++){
        if(arr[i] == 1){
            return i;
        }
    }
    return -1;
}