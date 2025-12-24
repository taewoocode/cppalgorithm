#include<bits/stdc++.h>
using namespace std;
set<int> s;
int main(){
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.erase(6);

    for(const auto& number : s){
        cout << number << ' ';
    }

    cout << '\n';

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << ' ';
    }

    return 0;
}