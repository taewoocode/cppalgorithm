#include<bits/stdc++.h>
using namespace std;
int n,cnt;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 10 == 1){
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}