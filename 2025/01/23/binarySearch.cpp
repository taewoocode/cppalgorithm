#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v {1,3,5,7,9,11};
    int target = 7;
    if(binary_search(v.begin(), v.end(), target)){
        cout << target << '\n';
    } else {
        cout << target << "target이 존재하지 않는다.";
    }
    return 0;
}