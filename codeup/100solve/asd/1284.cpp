#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    
    int n;
    cin >> n;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            int j = n / i;
            if(isPrime(i) && isPrime(j)){
                cout << min(i,j) << ' ' << max(i,j) << '\n';
                return 0;
            }
        }
    }
    cout << "wrong number" << '\n';
    return 0;
}