#include<bits/stdc++.h>
using namespace std;
vector<int> ret;
//H중에서 N찾기
vector<int> naiveSearch(const string& H, const string& N){
    for(int i = 0; i < H.size(); i++){
        bool matched = true;
        for(int j = 0; i < N.size(); j++){
            if(H[i + j] != N[j]){
                matched = false;
                break;
            }
        }
        if(matched) ret.push_back(i);
    }
    return ret;
}

vector<int> naiveSearch(const string& H, const string& N){
    for(int begin = 0; begin + N.size() < H.size(); begin++){
        bool matched = true;
        for(int i = 0; i < N.size(); i++){
            if(H[i + begin] != N[i]){
                matched = false;
                break;
            }
        }
        if(matched) ret.push_back(begin);
    }
    return ret;
}