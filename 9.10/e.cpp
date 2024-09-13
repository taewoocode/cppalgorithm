#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    for(auto i : v){
        cout << i << ' ';
    }
    cout << '\n';

    map<string,int> mp = {{"apple",1},{"banana",2},{"cherry",3}};
    for(auto i : mp){
        cout << i.first << "=" << i.second << ' ';
    }
    cout << '\n';

    set<string> st {"apple","banana","cherry"};
    for(auto i : st){
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}