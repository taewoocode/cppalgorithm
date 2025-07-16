#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> k;
    v.resize(n);

    int start = 0, end = 0;
    int length = 0, odd = 0;
    int ans = 0;


    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    while(end < n){
        if(v[end] % 2 == 1) odd++;

        while(odd > k){
            if(v[start] % 2 == 1) odd--;
            start++;
        }

        ans = max(ans, end - start - odd + 1);
        end++;
    }

    cout << ans << '\n';

    return 0;
}