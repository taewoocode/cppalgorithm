#include<bits/stdc++.h>
using namespace std;

int k, startIdx, endIdx;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++) cin >> v[i];

    long long sum = 0;
    int count = 0;

    while(true){
        if(sum >= k){
            if(sum == k) count++;
            sum -= v[startIdx];
            startIdx++;
        } else if(sum < k){
            if(endIdx == n) break; 
            sum += v[endIdx];
            endIdx++;
        }
    }

    cout << count << '\n';
    return 0;
}
