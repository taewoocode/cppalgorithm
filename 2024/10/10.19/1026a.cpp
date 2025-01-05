#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> b;
int n,ret;
int main(){
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < a.size(); i++){
        cin >> a[i];
    }
    for(int i = 0; i < b.size(); i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    for(int i = 0; i < a.size(); i++){
        ret += a[i] * b[i];
    }
    cout << ret << '\n';
    return 0;
}