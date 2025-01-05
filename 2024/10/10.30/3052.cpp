#include<bits/stdc++.h>
using namespace std;
bool remainders[42] = {false};
int count_;
int main(){
    vector<int> v(10);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    for(int i = 0; i < v.size(); i++){
        int remainder = v[i] % 42; //remainder에는 나머지가 저장되어 있다.
        if(!remainders[remainder]){ //만약 2가 저장되면 remainders[2]에
            remainders[remainder] = true;
            count_++;
        }
    }
    cout << count_ << '\n';

    return 0;
}