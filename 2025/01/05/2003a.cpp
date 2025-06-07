#include<bits/stdc++.h>
using namespace std;
int n, m, lo, hi; int currentSum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    vector<int> v(n);
    int count;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    while(hi < n){
        currentSum += v[hi];
        while(currentSum > m){
            currentSum -= v[lo];
            lo++;
        }
        if(currentSum == m){
            count++;
        }
        hi++;
    }
    cout << count << '\n';
    
    return 0;
}