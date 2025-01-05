#include<bits/stdc++.h>
using namespace std;
int a,n,c,d;
int ret,amount;
int main(){
    cin >> a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c >> d;
        ret += c * d;
    }
    if(ret == a){
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
   
    return 0;
}