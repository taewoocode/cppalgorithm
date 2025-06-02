#include<bits/stdc++.h>
using namespace std;
int cnt[10001];
int a[10001];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = n; i >= 1; i--){
        cout << cnt[i] << " ";
    }




    return 0;
}