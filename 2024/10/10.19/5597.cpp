#include<bits/stdc++.h>
using namespace std;
int a[31]; //1 ~ 30
int main(){
    for(int i = 1; i <= 28; i++){
        int num;
        cin >> num;
        //입력된 숫자는 1로 체크
        a[num] = 1;
    }
    for(int i = 1; i <= 30; i++){
        if(a[i] != 1){
            cout << i << ' ';
        }
    }
    return 0;
}