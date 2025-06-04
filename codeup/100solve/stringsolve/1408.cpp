#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    string a,b;

    for(char c : s){
        a += char(int(c) + 2);
        b += char((int(c) * 7) % 80 + 48);
    }

    //아스키 코드는 문자를 숫자 형태로 저장해둠 


    cout << a << '\n' << b;

    return 0;

}