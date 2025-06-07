#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s;
    cin >> s;
    int sum = 0;
    for(auto c : s){
        sum += c - '0';
    }

    cout << (sum % 3 == 0 ? 1 : 0) << '\n'; 
 
    return 0;
}