#include<bits/stdc++.h>
using namespace std;
int a,b;
int ret;
int main(){
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            ret -= i;
            cout << "-" << i;
        } else {
            ret += i;
            cout << "+" << i;
        }
    }
    cout << "=" << ret;
    return 0;
}