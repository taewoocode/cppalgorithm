#include<bits/stdc++.h>
using namespace std;
int ret;
vector<int> v;
int fibo(int n){
    if(n <= 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    cout << fibo(n) << '\n';

    return 0;
}

