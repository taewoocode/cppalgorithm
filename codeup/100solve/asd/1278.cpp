#include<bits/stdc++.h>
using namespace std;
int cnt,ret;
int main(){
    int n;
    cin >> n;
    while(n > 0){
            n /= 10;
            cnt++;
    }
    cout << cnt;
    return 0;
}