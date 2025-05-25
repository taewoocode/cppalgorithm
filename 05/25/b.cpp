#include<bits/stdc++.h>
using namespace std;
int a,r,n;
int main(){
    cin >> a >> r >> n;
    double ret = a * pow(r, n - 1);
    cout << (long long) ret << '\n';

    return 0;
}