#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100000
int n;
bool isPrime[MAX_N+1];
void eratosthenes(){
    memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    int sqrtn = int(sqrt(n));

    for(int i = 2; i < sqrtn; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }

}