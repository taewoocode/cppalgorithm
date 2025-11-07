#include<bits/stdc++.h>
using namespace std;
int n;
const int mod = 11;
int temp;
vector<int> v;
int ret, cnt;


void calculate_max_mode(int idx, int sum){
    // backtarcking
    // if(n == 10) return;
    if(idx == n){
        ret = max(ret ,sum % mod);
        cnt++;
        return ;
    }
    calculate_max_mode(idx + 1, sum + v[idx]);
    calculate_max_mode(idx + 1, sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    calculate_max_mode(0,0);

    cout << ret << '\n';
    cout << cnt << '\n';
    
}