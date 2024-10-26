#include<bits/stdc++.h>
using namespace std;
int n,ret;
int a[104],b[104],s[104];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    //S = A[0] * B[0] + A[n - 1] * B[n - 1];
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for(int i = 0; i < n; i++){
        ret += a[i] * b[i];
    }
    cout << ret << '\n';
    
    return 0;
}