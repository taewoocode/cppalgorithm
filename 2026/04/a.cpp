#include<bits/stdc++.h>
using namespace std;

int func1(int arr[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        // 5의 배수이면
        cout << cnt << " ";
        if(arr[i] % 5 == 0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[] {1,2,3,4,5};


    int ret = func1(arr, n);
    cout << ret << '\n';
}