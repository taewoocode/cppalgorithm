#include<bits/stdc++.h>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i1 = 0, i2 = 0;
    for(int i = 0; i < goal.size(); i++){
        if(i1 < cards1.size() && goal[i] == cards1[i1]){
            i1++;
        }else if(i2 < cards2.size() && goal[i] == cards2[i2]){
            i2++;
        } else {
            return "No";
        }
    } return "Yes";
}