#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
int main(){
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < m; i++){
        v[i] = i;
    }
    //i ~ j까지의 범위로 순서를 뒤집는다.(역순)
    for(int i = a; i < b; i++){
        cin >> a >> b;
        reverse(v.begin() +  a, v.begin() + b + 1);     
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }

    return 0;
}