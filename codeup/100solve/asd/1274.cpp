#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    if(n < 2){
        cout << "not prime" << '\n';
        return 0;
    }
    
    bool isPrime = true;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime) cout << "prime" << '\n';
    else cout << "not prime" << '\n';

    return 0;
}

