#include <bits/stdc++.h>
using namespace std;

int cnt[2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s;
    cin >> s;
    int n = (int)s.size();

    for (int i = 0; i < n; i++) {
        if (tolower(s[i]) == 'c') cnt[0]++;
        if (i + 1 < n && tolower(s[i]) == 'c' && tolower(s[i + 1]) == 'c') cnt[1]++;
    }

    cout << cnt[0] << '\n' << cnt[1] << '\n';

    return 0;
}
