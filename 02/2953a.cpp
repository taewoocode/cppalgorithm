#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL), cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 5;
    vector<int> v(n);
    int winnerNum, winnerScore;
    for(int i = 0; i < n; i++){
        //우승자의 번호를 저장
        //우승자의 점수를 출력
        //여기서 초기화가 되어야함
        int sum = 0, score = 0;
        for(int j = 0; j < 4; j++){
            cin >> score;
            sum += score;
        }
        v[i] = sum;
        if(sum > winnerScore){
            winnerScore = sum;
            winnerNum = i + 1;
        }
    }
    cout << winnerNum << " " << winnerScore << '\n';

    return 0;
}