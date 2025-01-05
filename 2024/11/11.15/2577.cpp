#include<bits/stdc++.h>
using namespace std;
int a,b,c;
string s;
int main(){
    cin >> a >> b >> c;
    int sum = a * b * c;
    s = to_string(sum);
    vector<int> v(10,0);

    for(auto it : s){
        v[it - '0']++;
    }

    for(int count : v){
        cout << count << '\n';
    }

    return 0;
}