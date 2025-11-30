#include<bits/stdc++.h>
using namespace std;
int n,r,c;

int func1(int n, int r, int c){
    if(n == 0) return 0; // 1x1 base case

    int half = 1 << (n-1);
    int quadrant_sifunc1e = half * half;

    if(r < half && c < half)
        return func1(n-1, r, c);
    else if(r < half && c >= half)
        return quadrant_sifunc1e + func1(n-1, r, c - half);
    else if(r >= half && c < half)
        return 2 * quadrant_sifunc1e + func1(n-1, r - half, c);
    else
        return 3 * quadrant_sifunc1e + func1(n-1, r - half, c - half);
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> r >> c;
    cout << func1(n,r,c) << '\n';
}