#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
     if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
    return 0;
}

int main(){
    int n = 10;
    auto result = fibo(10);
    cout << result << '\n';
    return 0;
}