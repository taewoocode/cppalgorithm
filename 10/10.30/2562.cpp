#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for(int i = 0; i < 9; i++){
        cin >> v[i];
    }
    int max_value = *max_element(v.begin(), v.end());
    int index = max_element(v.begin(),v.end()) - v.begin() + 1;

    cout << max_value << '\n';
    cout << index << '\n';


    return 0;
}