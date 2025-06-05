#include<bits/stdc++.h>
using namespace std;
int a[1004][1004];
int n,num = 1;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){ //홀수라면
            for(int j = n; j >= 1; j--){
                a[i][j] = num++;
            }
            //짝수라면
        } else if(i % 2 == 0){
            for(int j = 1; j <= n; j++){
                a[i][j] = num++;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }


    return 0;
}