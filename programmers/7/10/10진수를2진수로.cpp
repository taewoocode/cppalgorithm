#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a;
    cin >> a;
    
    if(a == 0){
        v.push_back(0);
    }
    
    while(a > 0){
        v.push_back(a % 2);
        a /= 2;
    }

    reverse(v.begin(), v.end());

    for(auto i : v){
        cout << i << '\n';
    }

    return 0;
}