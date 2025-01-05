#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
    cin >> a;
    sort(a.begin(), a.end(), greater<char>());
    cout << a << '\n';
    return 0;
}