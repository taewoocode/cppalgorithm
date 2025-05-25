#include<bits/stdc++.h>
using namespace std;
int n,x;
int ret;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x % 5 == 0){
            ret += x;
        }
    }
    cout << ret;
    return 0;
}