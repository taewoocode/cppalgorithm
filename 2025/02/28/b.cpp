#include<bits/stdc++.h>
using namespace std;
vector<string> solution(string my_string){
    vector<string> answer;
    string word = "";

    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] == ' '){
            //빈문자를 만나면
            if(!word.empty()){
                answer.push_back(word);
                word = "";
            } 
        } else {
            word += my_string[i];
        }
    }
    if(!word.empty()){
        answer.push_back(word);
    }
    return answer;
}