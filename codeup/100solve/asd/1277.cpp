#include<bits/stdc++.h>
using namespace std;
int n;
int x;
int first, mid, last;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(i == 0) first = x;
        if(i == n/2) mid = x;
        if(i == n - 1) last = x;
    }
    cout << first << ' ' << mid << ' ' << last << '\n';

    return 0;
}

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
    cout << v[0] << ' ' << v[n/2] << ' ' << v[n - 1] << '\n';

    return 0;
}