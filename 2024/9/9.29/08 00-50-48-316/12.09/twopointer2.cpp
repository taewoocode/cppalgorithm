#include<bits/stdc++.h>
using namespace std;
int n,l,r,ret,x;
vector<int> v;
int main(){
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> x;
    sort(v.begin(), v.end());
    int l = 0; int r = n - 1;
    while(l < r){
        if(v[l] + v[r] == x){
            r--;
            r++;
        } else if(v[l] + v[r] > x){
            r--;
        } else if(v[l] + v[r] < x){
            l++;
        }
    }
    cout << ret << '\n';

    /**
     * 투포인터는 정렬된 배열에서만 사용해야 한다.
     */
    return 0;
}