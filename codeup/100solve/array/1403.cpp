#include<bits/stdc++.h>
using namespace std;
int a[10004];
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }

    cout << '\n';

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }

    return 0;
}