#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v;
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        v[i] = i + 1;
    }
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        swap(v[a - 1], v[b - 1]);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}