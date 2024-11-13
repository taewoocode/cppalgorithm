#include<bits/stdc++.h>
using namespace std;
string a,b;
int ret;
int main(){
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int rev_a = stoi(a);
    int rev_b = stoi(b);
    ret = max(rev_a, rev_b);
    cout << ret << '\n';
    return 0;
}