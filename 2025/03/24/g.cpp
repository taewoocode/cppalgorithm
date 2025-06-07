#include<bits/stdc++.h>
using namespace std;
int majority(const vector<int> a){
    int majority = - 1, majorityCount = 0;
    int n = a.size();
    for(int i = 0; i < n; i++){
        int v = a[i];
        int count = 0;
        
        for(int j = 0; j < n; j++){
            if(a[j] == v){
                count++;
            }
        }
        if(count > majorityCount){
            majorityCount = count;
            majority = v;

        }
    }
    return majority;

}