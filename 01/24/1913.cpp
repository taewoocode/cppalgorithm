#include <iostream>
#include <vector>

using namespace std;

int N;  // 전역변수로 N을 정의
int target;  // 전역변수로 target을 정의
const int maxN = 1000;  
vector<vector<int>> grid(maxN, vector<int>(maxN, 0));  // 전역변수로 grid를 정의
int dx[] = {0, 1, 0, -1};  
int dy[] = {-1, 0, 1, 0};  

int main() {
    cin >> N >> target;

    int num = N * N;
    int x = 0, y = 0, d = 0;
    pair<int, int> targetPos;

    for (int i = N * N; i > 0; i--) {
        grid[x][y] = num;
        if (num == target) {
            targetPos = {x + 1, y + 1};  // 결과 출력 때 1-based 인덱스 사용
        }

        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx < 0 || nx >= N || ny < 0 || ny >= N || grid[nx][ny] != 0) {
            d = (d + 1) % 4; // 방향 전환
            nx = x + dx[d];
            ny = y + dy[d];
        }

        x = nx;
        y = ny;
        num--;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << targetPos.first << " " << targetPos.second << endl;

    return 0;
}
