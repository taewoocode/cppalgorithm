#include<bits/stdc++.h>
using namespace std;
int ret;
string a,b;
int main(){
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int revA = stoi(a);
    int revB = stoi(b);

    ret = max(revA,revB);
    cout << ret << '\n';

    return 0;
}