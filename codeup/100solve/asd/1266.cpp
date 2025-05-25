#include<bits/stdc++.h>
using namespace std;
int n;
int x;
int main(){
    cin >> n;
    int ret = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        ret += x;
    }
    cout << ret << '\n';
    
    
    
    return 0;
}