#include<bits/stdc++.h>
using namespace std;
int fast[10004];
int n,ret;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> fast[i];
    }

    ret = fast[1];

    for(int i = 1; i <= n; i++){
        ret = min(ret,fast[i]);
    }

    cout << ret << '\n';



    return 0;
}