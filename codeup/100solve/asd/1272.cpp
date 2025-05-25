#include<bits/stdc++.h>
using namespace std;
int k,h;
int main(){
    cin >> k >> h;
    int john = (k % 2 == 1) ? (k / 2 + 1) : (k / 2) * 10;
    int bob = (h % 2 == 1) ? (h / 2 + 1) : (h / 2) * 10;
    cout << john + bob << '\n';

    return 0;
}