#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int maxRet = INT_MIN;
    int minRet = INT_MAX;
    for(int i = 0; i < 5; i++){
        cin >> num;
        maxRet = max(maxRet, num);
        minRet = min(minRet, num);
    }
    cout << maxRet << '\n' << minRet << '\n';

    return 0;
}