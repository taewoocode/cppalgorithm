#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = (int)s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == 't'){
            cout << i + 1 << " ";
        } 
    }

    return 0;
}