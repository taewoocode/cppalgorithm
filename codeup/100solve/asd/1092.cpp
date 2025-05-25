#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int ret;
int main(){
    cin >> a >> b >> c;
    int day = 1;
    while(day % a != 0 || day % b != 0 || day % c != 0){
        day++;
    }
    ret = day;
    cout << ret <<  '\n';
    return 0;
}