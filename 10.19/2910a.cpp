#include <bits/stdc++.h>
using namespace std;

int n, c, a[1004];
vector<pair<int, int>> v; // {숫자, 빈도수}
map<int, int> mp, mp_first;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) { // 빈도수가 같으면 처음 등장 인덱스로 비교
        return mp_first[a.first] < mp_first[b.first];
    }
    return a.second > b.second; // 빈도수가 높은 순서대로 정렬
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        
        // 숫자가 처음 등장하면 인덱스 기록
        if (mp_first[a[i]] == 0) {
            mp_first[a[i]] = i + 1;
        }
    }
    
    for (auto it : mp) {
        v.push_back({it.first, it.second}); // {숫자, 빈도수}
    }
    
    sort(v.begin(), v.end(), cmp); // 정렬
    
    for (auto i : v) {
        for (int j = 0; j < i.second; j++) { // 빈도수만큼 출력
            cout << i.first << ' ';
        }
    }
    
    return 0;
}
