#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 5){
            cout << "찾음" << '\n';
            break;
        } else cout << "못 찾음" << '\n';
    }
    return 0;
}