#include<bits/stdc++.h>
using namespace std;
const int max_n = 50;
char board[max_n][max_n];
int n,m;
char pattern1[8][8], pattern2[8][8];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){
            int patternCount1 = 0;
            int patternCount2 = 0;
            for(int x = 0; x < 8; x++){
                for(int y = 0; y < 8; y++){
                    if(board[i + x][j + y] != pattern1[x][y]) patternCount1++;
                    if(board[i + x][j + y] != pattern2[x][y]) patternCount2++;
                }
            }
            min_value = min(min_value, min(patternCount1, patternCount2));
        }
    }
    cout << min_value << '\n';


    return 0;
}