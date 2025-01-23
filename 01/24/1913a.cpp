#include<iostream>
#include<vector>
using namespace std;
int N;
int target;
const int maxN = 1000;
vector<vector<int>> v(maxN, vector<int>(maxN,0));
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int main(){
    cin >> N >> target;
    int num = N * N;
    int x = 0, y = 0, d = 0;
    pair<int,int> targetPos;

    for(int i = N * N; i > 0; i--){
        v[y][x] = num;
        if(num == target){
            targetPos = {y + 1, x + 1};
        }
        int nx = x + dx[d];
        int ny = y + dy[d];

        if(nx < 0 || nx >= N || ny < 0 || ny >= N || v[ny][nx] != 0){
            d = (d + 1) % 4;
            nx = x + dx[d];
            ny = y + dy[d];
        }
        x = nx;
        y = ny;
        num--;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << v[i][j] << '\n';
        }
        cout << '\n';
    }
    cout << targetPos.first << " " << targetPos.second << '\n';
    return 0;
}