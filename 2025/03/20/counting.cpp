#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    int ret = count(v.begin(), v.end(), 5);
    cout << ret << '\n';
    return 0;
}