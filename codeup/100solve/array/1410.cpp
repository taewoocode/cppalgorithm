#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    
    int openCnt = 0;
    int closeCnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') openCnt++;

        if(s[i] == ')') closeCnt++;
    }

    cout << openCnt << " " << closeCnt << '\n';

    return 0;
}