#include<bits/stdc++.h>
using namespace std;

int solution(int a, int d, vector<bool> included){
    int answer = 0;
    for(int i = 0; i < included.size(); i++){
        // 첫째항이 a, d를 계속 더해나가야함        
        answer += a + (i * d);

    }

    return answer;
}