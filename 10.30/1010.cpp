#include<bits/stdc++.h>
using namespace std;
int t;
int n,m;
int ret;
vector<int> v;
int main(){
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        for(int j = 0; j < n; j++){
            ret *= (m - j);
            ret /= (j + 1);
        }
    }
    cout << ret << '\n';
 

    return 0;
}