#include<bits/stdc++.h>
using namespace std;
#define sz(x) ((int)(x).size())
#define f first
#define s second
typedef unsigned long long ll;
int n,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        int ret2 = 0, ret5 =0;
        for(int j = 2; j <= a; j *= 2){
            ret2 += a / j;
        }
        for(int j = 5; j <= a; j *= 5){
            ret5 += a / j;
        }
        cout << min(ret2, ret5) << '\n';
    }
    return 0;
}
/**
 * 2 * 5 로 짝을 짓는다.
 */