#include<bits/stdc++.h>
using namespace std;
int n,x,ret;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        ret = max(ret,x);
    }
    cout << ret;


    return 0;
}