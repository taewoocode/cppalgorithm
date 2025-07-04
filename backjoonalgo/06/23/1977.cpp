#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    bool found = false;
    int sum = 0;
    int ret = INT_MAX;
    for(int i = n; i <= m; i++){
        int root = sqrt(i);
    
        if(root * root == i){
            sum += i;
            ret = min(ret,i);
            found = true;
        }
    }

    if(found){
        cout << sum << '\n';
        cout << ret << '\n';
    } else cout << -1 << '\n';


    return 0;
}