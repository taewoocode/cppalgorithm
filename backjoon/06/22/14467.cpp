#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    int arr[11];
    memset(arr, -1, sizeof(arr));

    int crossCount = 0;

    for(int i = 0; i < n; i++){
        int id = v[i].first;
        int pos = v[i].second;

        if(arr[id] == -1) {
            arr[id] = pos;
        } else if(arr[id] != pos) {
            crossCount++;
            arr[id] = pos;
        }
    }

    cout << crossCount << '\n';

    return 0;
}
