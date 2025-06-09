#include<bits/stdc++.h>
using namespace std;
int ret;

int go(int n){
    if(n == 0) return 0;
    return n + go(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << go(n) << " ";
    return 0;
}