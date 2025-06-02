#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int q;
        cin >> q;
        if(st.count(q)) cout << 1 << " ";
        else cout << 0 << " ";
    }
    return 0;
}