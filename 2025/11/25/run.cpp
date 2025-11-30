#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll moves = 0;  // 누적 이동 횟수
    ll pos = 0;    // 현재 위치

    for(int i = 0; i < n; i++) {
        int obs = v[i];
        int target = obs - 1; // 점프 시작 위치

        // 목표 위치가 이미 지나갔으면 불가능
        if(target < pos) {
            cout << -1 << "\n";
            return 0;
        }

        int dist = target - pos;       // 현재 위치 → 점프 시작 위치까지 거리
        moves += dist / 2 + dist % 2; // 최소 이동 횟수 (점프 최대한 + 걷기)
        moves += 1;                    // 장애물 점프 1회
        pos = obs + 1;                 // 점프 후 착지 위치
    }

    cout << moves << "\n";
    return 0;
}
