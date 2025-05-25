#include<bits/stdc++.h>
using namespace std;
int ret;
int n;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        ret += i;
    }
    cout << ret;
    return 0;
}