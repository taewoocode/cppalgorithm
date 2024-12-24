#include<bits/stdc++.h>
using namespace std;
const int max_n = 50;
char board[max_n][max_n]; 
char pattern1[8][8], pattern2[8][8];
int changePattern1, changePattern2;
int n, m;

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if((i + j) % 2 == 0){
                pattern1[i][j] = 'W';
                pattern2[i][j] = 'B';
            } else {
                pattern1[i][j] = 'B';
                pattern2[i][j] = 'W';
            }
        }
    }

    int min_value = INT_MAX;

    // 체스판을 잘라내며 최소 칠해야 하는 정사각형의 개수 계산
    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){ 
            // 8x8 크기 부분을 pattern1과 pattern2와 비교
            for(int x = 0; x < 8; x++){
                for(int y = 0; y < 8; y++){
                    if(board[i + x][j + y] != pattern1[x][y]) changePattern1++;
                    if(board[i + x][j + y] != pattern2[x][y]) changePattern2++;
                }
            }
         min_value = min(min_value, min(changePattern1, changePattern2));   
        }
    }

    // 결과 출력
    cout << min_value << '\n';

    return 0;
}
