#include<bits/stdc++.h>
using namespace std;
int n,m,ret,x;
vector<int> a;
//10만 * 10만일땐 안댐
int main(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] + a[j] == x)
            ret++;
        } 
    }
    return 0;
}