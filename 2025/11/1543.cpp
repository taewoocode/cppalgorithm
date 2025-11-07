#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //공백포함 입력받기
    getline(cin, a);
    getline(cin, b);
    
    int count = 0;
    int pos = 0; // 위치

    for(int i = 0; i < a.size(); i++){
        pos = a.find(a,pos);
        if(pos == string::npos) break;
        count++;
        pos += b.size();
    }

    cout << count << '\n';
}