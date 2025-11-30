#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string,int> mp;

    for(int i = 0; i < clothes.size(); i++){
        mp[clothes[i][1]]++;
    }

    for(const auto& pair : mp){
        int choice = pair.second;
        answer *= (choice * 1);
    }
    return answer;
}

void func1(int n){
    if(n == 1) return;
    cout << n << '\n';
    func1(n - 1);
}

int mod_func1(int a, int b, int m){
    int answer = 1;
    while(b > 0){
        // answer = answer * a;
        // answer = answer % m;
        answer *= a;
        answer %= m;
        b--;
    }
    return answer;
}

using ll = long long;

ll mod_func2(int a, int b, int m){
    ll val = 1;
    while(b--) val *= a, val *= m;
    return val;
}