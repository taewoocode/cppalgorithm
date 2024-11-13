#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v;
int main(){
    cin >> n >> k;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int count = 0;
    for(int i = n - 1; i >= 0; i--){
        if(v[i] <= k){
            count += k / v[i]; 
            k %= v[i];
        }
    }
    cout << count << '\n';

    return 0;
}