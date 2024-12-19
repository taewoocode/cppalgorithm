#include<bits/stdc++.h>
using namespace std;
string s,tmp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    tmp = s;
    reverse(tmp.begin(), tmp.end());
    if(tmp == s){
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    return 0;
}