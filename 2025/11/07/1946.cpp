#include<bits/stdc++.h>
using namespace std;
int n,t;
vector<pair<int,int>> pv;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        pv.clear();

        for(int j = 0; j < n; j++){
            int a,b;
            cin >> a >> b;
            pv.push_back({a,b});
        }

        sort(pv.begin(), pv.end());

        int cnt = 1;
        int min_val = pv[0].second;

        for(int k = 1; k < pv.size(); k++){
            if(min_val > pv[k].second){
                min_val = pv[k].second;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}