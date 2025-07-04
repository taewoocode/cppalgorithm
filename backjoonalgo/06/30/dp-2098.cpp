#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n,temp;

bool check(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int go(int idx, int sum){
    if(idx == n) return check(sum);
    return go(idx + 1, sum + v[idx]) + go(idx + 1, sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    for(int i = 0; i < v.size(); i++){
        cin >> temp;
        v.push_back(temp);
    }

    go(0,0);
}

/**
 * 호출	의미
    go(idx + 1, sum + v[idx])	v[idx]를 선택해서 sum에 포함
    go(idx + 1, sum)	v[idx]를 선택하지 않음 (건너뜀)
 */