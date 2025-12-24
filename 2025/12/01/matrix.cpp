#include<bits/stdc++.h>
using namespace std;

int arrayIndex(int array, int index){
    vector<vector<int>> answer;
    for(int i = 0; i < answer.size(); i++){
        
    }
}

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2){
    vector<vector<int>> answer;
    answer.assign(arr1.size(), vector<int>(arr2[1].size(),0));
    for(int i = 0; i < arr1.size(); i++){
        for(int j = 0; j < arr2[1].size(); j++){
            for(int k = 0; k < arr2.size(); k++){
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    return answer;
}

int main(){
    for(int i = 0; i < stages.size(); i++){
        for(int j = 1; j < stages.size(); j++){
            challengers[j]++;
        }
        fail[stages[i]]++;
    }

}