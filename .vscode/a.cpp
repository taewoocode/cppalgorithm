/**
 * 애렌의 땅울림 최단거리 에렌은 (0, 0) 위치의 파라디 섬에서 출발하여, 목표 지점 (y, x)까지 도달하여 땅울림을 실행하려 한다.
   에렌은 1로 표시된 땅에서만 땅울림을 이어갈 수 있 고, 0으로 표시된 곳은 갈 수 없는 곳이다.
   또한, 진격의 거인의 힘으로 인해 한 번 밟은 땅은 다 시는 되돌아갈 수 없다. 에렌이 목표 지점까지 이동할 수 있는 최단 거리를 구해보자. 만약 도달할 수 없다면
   -1을 출력하자.

   입력값 첫줄 n,m 여기서 n,m(행,렬)
   입력값 둘째줄 이동하고 싶은 좌표 (y,x) ex) 5,3
 */

#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
const int max_n = 100;
int y,x;
int n,m;
int a[max_n][max_n]; int visited[max_n][max_n];
int main(){
    FASTIO();
    cin >> n >> m;
    cin >> y >> x;

    //맵데이터 입력
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    queue<pair<int,int>> q; //y,x
    visited[y][x] = 1;
    q.push({y,x});
    while(q.size()){
        tie(y,x) = q.front();
        q.pop();

        //방향움직임 
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i]; //새롭게 거리 움직인 거리 저장
            int nx = x + dx[i];

            //overflow 탐색 배열의 범위를 넘으면 건너뜀
            if(ny > y || ny < 0 || nx > x || nx < 0){
                continue;
            }
            
            //배열의 크기가 0이거나 방문이 1이라면 건너뜀
            if(a[ny][nx] == 0 || visited[ny][nx] == 1){
                continue;
            }

            visited[y][x] = visited[ny][nx] + 1;
        }

    for(int i = 0; i < 100; i++){
            for(int j = 0; j < 100; j++){
                cout << "방문노드: " + visited[i][j]; 
            }
        }
    }
    return 0;
}

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}


#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
const int max_n = 100;
int n, m;
int y, x;
int a[max_n][max_n], visited[max_n][max_n];

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    FASTIO();
    cin >> n >> m;
    cin >> y >> x;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    queue<pair<int, int>> q;
    if (a[0][0] == 0) {
        cout << -1 << '\n';
        return 0;
    }

    q.push({0, 0});
    visited[0][0] = 1;

    while (!q.empty()) {
        auto [y, x] = q.front();
        q.pop();

        if (y == y && x == x) {
            cout << visited[y][x] - 1 << '\n';
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;
            if (a[ny][nx] == 0 || visited[ny][nx] != 0)
                continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    cout << -1 << '\n'; // 도달 불가
    return 0;
}
