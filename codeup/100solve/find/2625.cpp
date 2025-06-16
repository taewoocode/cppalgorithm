#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int a = 1; a <= n; a++){
        for(int b = a; b <= n; b++){
            int c = n - a - b;
            if(c < b) continue;
            if(a + b > c) count++;
        }
    }
    cout << count << '\n';

    return 0;
}