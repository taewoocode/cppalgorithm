#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105];
string s;
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < m; j++){
            if(s[j] == '.'){
                a[i][j] = -1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 0){
                int cnt = 1;
                while(a[i][j + 1] == -1){
                    a[i][j + 1] = cnt++;
                    j++;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
/**
 * a = cnt++ -> 후위증감이라 a가 1이라고 할 때 a는 1을 할당받고 난 이후에 cnt가 1증가 하게 되어서 2가 됨
 */