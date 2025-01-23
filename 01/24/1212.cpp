#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    string ret = "";
    for(int i = 0; i < s.size(); i++){
        int digit = s[i] - '0';
        string bin = bitset<3>(digit).to_string();
        
        if(i == 0){
        ret =  to_string(stoi(bin));

        } else {
            ret += bin;
        }
    }
    cout << ret << '\n';
    
    return 0;
}