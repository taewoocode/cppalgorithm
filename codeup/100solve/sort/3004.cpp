#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> pv;
vector<int> result;
int n;
int main(){
    cin >> n;
    pv.resize(n);
    result.resize(n);

    for(int i = 0; i < n; i++){
        cin >> pv[i].first;
        pv[i].second = i;
    }

    sort(pv.begin(), pv.end());

    for(int i = 0; i < result.size(); i++){
        result[pv[i].second] = i;
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}