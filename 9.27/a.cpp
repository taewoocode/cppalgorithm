#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5,6};
    int sum = 5;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(sum == v[i] + v[j]){
                cout << v[i] << "," << v[j] << '\n';
            }
        }
    }
    return 0;
}