#include<bits/stdc++.h>
using namespace std;
int main(){
    const int N = 3;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
}