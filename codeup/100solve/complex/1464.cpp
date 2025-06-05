#include<bits/stdc++.h>
using namespace std;
int a[1004][1004];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    int num = 1;
    
    for(int i = n - 1; i >= 0; i--){
        for(int j = m - 1; j >= 0; j--){
            a[j][i] = num++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[j][i] << " ";
        }
        cout << '\n';
    }


    return 0;
}