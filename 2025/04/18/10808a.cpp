#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    for(int i = 0; i < 26; i++){
        int cnt = 0;
        char target = i + 'a';
        for(auto c : s){
            if(c == target){
                cnt++;
            }
        }
        cout << cnt << ' ';
    }
}