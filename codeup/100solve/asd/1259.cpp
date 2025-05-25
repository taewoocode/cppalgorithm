#include<bits/stdc++.h>
using namespace std;
int n,ret;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) ret += i;
    }
    cout << ret;



    return 0;
}