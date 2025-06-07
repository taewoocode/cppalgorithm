#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int t,n;
int min_ret,max_ret = 0;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        v.resize(n);
        for(int j = 0; j < v.size(); j++){
            cin >> v[j];
        }
        min_ret = *min_element(v.begin(), v.end());
        max_ret = *max_element(v.begin(), v.end());
        cout << min_ret << ' ' << max_ret << '\n';
    }
    return 0;
}