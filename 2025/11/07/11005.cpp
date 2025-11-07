#include<bits/stdc++.h>
using namespace std;
int N, B;
int main(){
    cin >> N >> B;
    string ret = "";
    while(N > 0){
        int r = N % B;
        if(r < 10) ret += (r + '0');
        else ret += (r - 10 + 'A');
        N /= B;
    }

    reverse(ret.begin(), ret.end());
    cout << ret << '\n';
    
    return 0;
}