#include<bits/stdc++.h>
using namespace std;

vector<int> naiveSearch(string& h, string& n){
    vector<int> ret;
    for(int begin = 0; begin + n.size() <= h.size(); begin++){
        bool matched = true;
        for(int i = 0; i < n.size(); i++){
            if(h[begin + i] != n[i]){
                matched = false;
                break;
            }
        }
        if(matched) ret.push_back(begin);
    }
    return ret;
}