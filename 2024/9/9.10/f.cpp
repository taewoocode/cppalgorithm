#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
    for(auto i : v){
        cout << i << ' ';
    }
    cout << '\n';
    for(auto i = v.begin(); i != v.end(); i++){
        cout << *i << ' ';
    }
    cout << '\n';
    
    // auto result = find(v.begin(), v.end(), 9); not Found
    auto result = find(v.begin(), v.end(), 3);
    if(result != v.end()){
        cout << "find result: " << *result << ' ';
    } else cout << "not Found" << '\n';
    return 0;
}