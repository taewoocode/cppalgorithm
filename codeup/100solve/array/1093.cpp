#include<bits/stdc++.h>
using namespace std;
int cnt[24],n;
int arr[10001];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cnt[arr[i]]++;  
    }

    for(int i = 1; i <= 23; i++){
        cout << cnt[i] << " ";
    }


    return 0;
}