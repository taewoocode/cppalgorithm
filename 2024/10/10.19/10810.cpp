#include<bits/stdc++.h>
using namespace std;
int a[100];
int n,m;
int from, to, ball;
int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> from >> to >> ball;
        for(int j = from; j <= to; j++){
            a[j - 1] = ball;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}