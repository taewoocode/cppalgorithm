#include<bits/stdc++.h>
using namespace std;
int lo,hi,n,m,mid, ret,a[100004], sum,mx;
typedef long long ll;

bool check(int n){
    if(mx > mid){
        return false;
    } 
    int temp = mid;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(mid - a[i] < 0){
            mid = temp;
            cnt++;
        }
        mid -= a[i];
    }
    if(mid != temp) cnt++;
    return cnt <= m;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    lo = 0; hi = sum;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if(check(mid)){
            hi = mid - 1;
            ret = mid;
        } else {
            lo = mid + 1;
        }
    }




    return 0;
}