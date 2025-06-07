#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }


    return 0;
}