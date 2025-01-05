#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    v.insert(v.begin(), 0);
    for(auto i : v){
        cout << i << ' ';
    }
    cout << '\n';

    v.erase(v.begin());
    for(auto i : v){
        cout << i << ' ';
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    v.insert(v.begin(), 0);
    for(auto i : v){
        cout << i << ' ';
    }
    cout << '\n';
    v.erase(v.begin());
    for(auto i : v){
        cout << i << ' ';
    }

    return 0;
}