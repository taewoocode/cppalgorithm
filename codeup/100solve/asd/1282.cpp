#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    for(int k = 1; k < n; k++){
        int a = n - k;
        int t = sqrt(a);
        if(t * t == a){
            cout << k << ' ' << t << '\n';
            break;
        }
    }
    return 0;
}