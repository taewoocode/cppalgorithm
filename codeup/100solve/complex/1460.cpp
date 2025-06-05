#include<bits/stdc++.h>
using namespace std;
int a[1004][1004];

int main(){
    int n;
    cin >> n;

    int num = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = num++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }


    return 0;
}