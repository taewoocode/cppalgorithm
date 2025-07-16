#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i = 0; i < queries.size(); i++){
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];

        int min_val = INT_MAX;

        for(int j = s; j <= e; j++){
            if(arr[j] > k){
                min_val = min(min_val, arr[j]);
            }
        }

        if(min_val == INT_MAX){
            answer.push_back(-1);
        } else {
            answer.push_back(min_val);
        }
    }

    return answer;
}

#include<bits/stdc++.h>
using namespace std;
int min_val = INT_MAX;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for(int i = 0; i < queries.size(); i++){
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];

        min_val = INT_MAX;

        for(int j = s; j <= e; j++){
            if(arr[j] < k){
                min_val = min(min_val, arr[j]);
            }
        }

        if(min_val == INT_MAX){
            answer.push_back(-1);
        } else {
            answer.push_back(min_val);
        }
    }

    return answer;
}

#include<bits/stdc++.h>
using namespace std;
int a;
int main(){
    cin >> a;
    while(a > 0){
        a = a % 2;
    }
    

    return 0;
}