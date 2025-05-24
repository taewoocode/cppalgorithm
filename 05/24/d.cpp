#include<bits/stdc++.h>
using namespace std;
int n,sum,ret;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i;
        if(sum >= n){
            break;
        }
    }
    cout << sum;
    return 0;
}