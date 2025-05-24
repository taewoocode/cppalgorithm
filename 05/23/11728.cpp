#include<bits/stdc++.h>
using namespace std;
int a[1000004], b[1000004], c[1000004];
int n,m;
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int aidx = 0, bidx = 0;
    for(int i = 0; i < n + m; i++){
        if(bidx == m) c[i] = a[aidx++];
        else if(aidx == n) c[i] = b[bidx++];
        else c[i] = b[bidx++];
    }
    for(int i = 0; i < n + m; i++) cout << c[i] << ' ';
    return 0;
}

int main(){
    int a[] = {10, 20, 30};
    int aidx = 0;
    int x = a[aidx++]; 
    int ret = a[aidx++];
}