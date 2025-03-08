#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    vector<int> scores(n);
    int maxScore = 0, winner = 0;
    for(int i = 0; i < n; i++){
        int sum = 0, score;

        for(int j = 0; j < 4; j++){
            cin >> score;
            sum += score;
        }

        scores[i] = sum;
        if(sum > maxScore){
            maxScore = sum;
            winner = i + 1;
        }
    }
    cout << winner << ' ' << maxScore << '\n';
 
}