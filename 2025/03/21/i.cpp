#include<bits/stdc++.h>
using namespace std;
vector<int> solution(int n){
    vector<int> answer;
    while(n != 1){
        answer.push_back(n);
        if(n % 2 == 0){
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    answer.push_back(1);
    return answer;
}