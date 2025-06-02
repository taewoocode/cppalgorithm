#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    vector<int> v;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int q;
        cin >> q;
        bool found = binary_search(v.begin(), v.end(), q);
        cout << (found ? 1 : 0) << ' ';
    }

    return 0;
}