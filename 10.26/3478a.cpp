#include<bits/stdc++.h>
using namespace std;
/**
 * 거듭제곱으로 2,5의 갯수를 구하여라 
 * 만약 10! 이라면 2의 갯수, 5의 갯수는 몇개인지?
 * 그리고 최솟값을 찾아서 더 작은 값을 반환하는 로직을 구하여라
 * 
 */
int n,a;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        cin >> a;
        int ret2 = 0, ret5 = 0;
        for(int j = 2; j <= a; j *= 2 ){
            ret2 += a / j;
        }
        for(int j = 5; j <= a; j *= 5){
            ret5 += a / j;
        }
        cout << min(ret2,ret5) << '\n';
    }
    return 0;
}