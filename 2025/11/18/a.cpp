#include<bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    int n = participant.size();
    for(int  i = 0; i < n; i++){
        if(participant[i] != completion[i]){
            return participant[i];
        }
    }
    return participant[participant.size() - 1];
}

