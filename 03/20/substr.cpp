#include<bits/stdc++.h>
using namespace std;
vector<int> solution(string myString){

    vector<int> answer;
    int start = 0;
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'x'){
            answer.push_back(i - start);
            start = i + 1;
        }
    }
    answer.push_back(myString.size() - start);

    return answer;

}



