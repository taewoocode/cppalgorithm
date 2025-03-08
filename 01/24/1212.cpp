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
        //3개의 비트를 가지는 비트배열 생성
        string bin = bitset<3>(digit).to_string();
        
        if(i == 0){
        
        //문자열을 정수로 변환하면서 앞에 붙은 0을 제거한다. -> 그리고 다시 문자열로 변환
        ret =  to_string(stoi(bin));

        } else {
            ret += bin;
        }
    }
    cout << ret << '\n';
    
    return 0;
}