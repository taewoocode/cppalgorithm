#include<bits/stdc++.h>
using namespace std;
int ret;
int n,m,j,temp;
vector<int> v;
int main(){
    cin >> n >> m >> j;
    int l = 1;
    for(int i = 0; i < j; i++){
        int r = l + m - 1;
        cin >> temp;
        if(temp >= l && temp <= r) continue;
        else{
            if(temp < l){
                ret += (l - temp);
                l = temp;
            } else {
                l += (temp - r);
                ret += (temp - r);
            }
        }
        cout << ret << '\n';
    }

    return 0;
}