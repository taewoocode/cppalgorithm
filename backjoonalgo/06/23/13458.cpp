#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    ll totalSupervisors = 0;
    int b,c;
    cin >> b >> c;

    for(int i = 0; i < n; i++){
        totalSupervisors += 1;
        int remaining = v[i] - b;
        if(remaining > 0){
            totalSupervisors += (remaining + c - 1) / c;
        }
    }

    cout << totalSupervisors << '\n';
    return 0;
}