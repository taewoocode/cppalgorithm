#include<bits/stdc++.h>
using namespace std;
int t,n;

int concat(const vector<int>& lengths){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < lengths.size(); i++){
        pq.push(lengths[i]);
    }
    int ret = 0;
    while(pq.size() > 1){
        int min1 = pq.top(); pq.pop();
        int min2 = pq.top(); pq.pop();
        pq.push(min1 + min2);
        ret += min1 + min2;
    }
    return ret;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n; j++){
            cin >> v[j];
        }
        cout << concat(v) << '\n';
    }
    return 0;
}
