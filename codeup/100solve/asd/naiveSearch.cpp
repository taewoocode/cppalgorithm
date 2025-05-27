#include<bits/stdc++.h>
using namespace std;

vector<int> naiveSearch(string& H, string& N){
    vector<int> ret;
    for(int begin = 0; begin + N.size() <= H.size(); begin++){
        bool matched = true;
        for(int i = 0; i < N.size(); i++){
            if(H[begin + i] != N[i]){
                matched = false;
                break;
            }
        }
        if(matched) ret.push_back(begin);
    }
    return ret;

}