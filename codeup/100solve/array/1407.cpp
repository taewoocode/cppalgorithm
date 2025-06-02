#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    getline(cin, s);
    auto a = remove(s.begin(), s.end(), ' ');
    s.erase(a, s.end());
    cout << s << " ";
    return 0;
}