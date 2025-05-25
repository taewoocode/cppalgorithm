#include<bits/stdc++.h>
using namespace std;
double a,b;
int main(){
    cin >> a >> b;
    if(a > b) swap(a,b);
    for(double i = a; i <= b + 1e-9; i+= 0.01){
        cout << fixed << setprecision(2) << i << ' ';
    }

    return 0;
}