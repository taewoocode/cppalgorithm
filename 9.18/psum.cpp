#include<bits/stdc++.h>
using namespace std;
int a[100004],psum[100004],a,b,c,n,m;
int main(){
    cin >> n >> m;

    //1부터 시작해야 -1에 에러가 안난다.
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    }
    //구간 쿼리문
    for(int i = 0; i < m; i++){
        cin >> b >> c;
        cout << psum[c] - psum[b - 1] << '\n';
    }
    return 0;
}