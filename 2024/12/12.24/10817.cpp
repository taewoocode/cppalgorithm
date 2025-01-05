#include<bits/stdc++.h>
using namespace std;
int a,b,c;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;

    // 두 번째로 큰 수를 골라야함
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    cout << v[1] << '\n';

    return 0;
}