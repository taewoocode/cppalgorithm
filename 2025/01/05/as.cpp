#include<bits/stdc++.h>
using namespace std;
int n = 5;
int ret;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    for(int i = 0; i < n; i++){
        ret += i;
    }
    cout << ret << '\n';
    cout << n * (n + 1) / 2 << '\n';
    




    return 0;
}