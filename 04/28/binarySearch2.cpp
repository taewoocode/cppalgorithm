#include<bits/stdc++.h>
using namespace std;
int target = 6;
vector<int> v{1,2,3,4,5,6};
int main(){
    sort(v.begin(), v.end());
    if(binary_search(v.begin(), v.end(), target)) cout << "find\n" ;
    else cout << "not Found";
    return 0;
}