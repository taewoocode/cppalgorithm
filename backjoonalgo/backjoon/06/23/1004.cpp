#include <bits/stdc++.h>
using namespace std;

bool isInside(int x, int y, int cx, int cy, int r) {
    int dx = x - cx;
    int dy = y - cy;
    return dx * dx + dy * dy < r * r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        cin >> n;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int cx, cy, r;
            cin >> cx >> cy >> r;

            bool startIn = isInside(x1, y1, cx, cy, r);
            bool endIn = isInside(x2, y2, cx, cy, r);

            if (startIn != endIn) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
