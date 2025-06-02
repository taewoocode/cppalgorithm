#include<bits/stdc++.h>
using namespace std;
int n;
int a[10004];
int visited[10004];
int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        visited[a[i]] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(visited[i] != 1){
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}