#include<bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> arr, vector<vector<int>> queries){
    vector<int> answer;
    for(int i = 0; i < queries.size(); i++){
        int temp1 = queries[i][0]; //0
        int temp2 = queries[i][1]; //3
        swap(arr[temp1], arr[temp2]);
    }


    return arr;
}

int main(){
    vector<int> arr {0,1,2,3,4};
    vector<vector<int>> queries {{0,3},{1,2},{1,4}};
    vector<int> ret = solution(arr,queries);
    return 0;
}