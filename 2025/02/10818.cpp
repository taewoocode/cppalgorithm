#include<bits/stdc++.h>
using namespace std;
int max_n, min_n;
vector<int> v;
int main(){
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    max_n = *max_element(v.begin(), v.end());
    min_n = *min_element(v.begin(), v.end());
    cout << min_n << ' ' << max_n << '\n';

    return 0;
}