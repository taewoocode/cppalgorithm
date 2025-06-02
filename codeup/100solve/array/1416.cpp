#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string ret = "";
    while(n != 0){
        ret = to_string(n % 2);
        n /= 2;
    }
    reverse(ret.begin(), ret.end());
    cout << ret << '\n';

    return 0;
}