#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b >> c;
    vector<int> v {a,b,c};

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}