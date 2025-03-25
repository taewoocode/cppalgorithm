#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i = 0; i < queries.size(); i++){
        int start = queries[i][0];
        int end = queries[i][1];

        for(int j = start; j <= end; j++){
            arr[j] += 1;
        }

    }
    return arr;
}