#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    int n;
    if(c >= 'A' && c <= 'F'){
        n = c - 'A' + 10;
    } else {
        return 0;
    }

    for(int i = 1; i <= 15; i++){
        cout << n << "*" << i << '\n';
    }


    return 0;
}