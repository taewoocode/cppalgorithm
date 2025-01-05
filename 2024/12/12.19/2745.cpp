#include<bits/stdc++.h>
using namespace std;
int b,ret;
string n;
vector<int> v;
int main(){
    cin >> n >> b;
    for(int i = 0; i < n.size(); i++){
        char c = n[i];
        int value;
        if('0' <= c && c <= '9'){
            value = c - '0';
        } else {
            value = c - 'A' + 10;
        }
        ret = ret * b + value;
    }
    cout << ret << '\n';

    return 0;
}