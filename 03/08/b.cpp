#include<bits/stdc++.h>
using namespace std;
int t,n,temp,m;

string check(int temp, vector<int> &v){
    int l = 0, r = v.size() - 1;
    int mid;
    while(l <= r){
        mid = (l + r) / 2;
        if(v[mid] > temp){
            r = mid - 1;
        } else if(v[mid] == temp) return "기억함";
        else l = mid + 1;
    }
    return "까먹음";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    while(t--){
        vector<int> v;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        cin >> m;
        for(int i = 0; i < m; i++){
            cin >> temp;
            cout << check(temp, v) << '\n';
        }

    }

    return 0;
}