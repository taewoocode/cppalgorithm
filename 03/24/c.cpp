#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> date1, vector<int> date2){
    int answer = 0;
    // date1 < date2 -> 1
    // date1 == date -> 0

    for(int i = 0; i < date1.size(); i++){
        if(date1[i] < date2[i]) return 1;
        if(date1[i] == date2[i]) return 0;
    }

    return answer;
}