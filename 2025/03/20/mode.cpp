#include<bits/stdc++.h>
using namespace std;
string solution(string code){
    int mode = 0;
    string ret = "";

    for(int i = 0; i < code.size(); i++){
        if(code[i] == '1'){
            mode = 1 - mode;
        } else {
            if(mode == 0 && i % 2 == 0){
                ret += code[i];
            } else if(mode == 1 && i % 2 == 1){
                ret += code[i];
            }
        }
    }
    return ret.empty() ? "EMPTY" : ret;
}