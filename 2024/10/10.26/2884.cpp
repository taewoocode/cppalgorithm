#include<bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    int t = h * 60 + m - 45;

    t = (t + 1440) % 1440;
    div_t result = div(t, 60);

    cout << result.quot << " " << result.rem << '\n';
    return 0;
}
