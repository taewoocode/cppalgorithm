#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,float> a, pair<int,float> b){

    //실패율이 같으면  낮은 스테이지가 먼저 -> 오름차순
    if(a.second == b.second) return a.first < b.first; 
    //실패율이 다르면 실패율이 큰것부터 -> 내림차순
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {

    vector<float> challenger(N+2, 0.0);
    vector<float> fail(N+2, 0.0);

    for(int i = 0; i < stages.size(); i++){
        for(int j = 1; j <= stages[i]; j++){
            challenger[j]++;
        }
        fail[challenger[i]]++;
    }

    vector<pair<int,float>> failRatio(N);
    for(int i = 0; i < N; i++){
        failRatio[i].first = i + 1;
    }

}
