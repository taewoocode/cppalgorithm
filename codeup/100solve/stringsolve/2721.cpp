#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int main(){
    cin >> a >> b >> c;

    bool compare1 = a.back() == b.front();
    bool compare2 = b.back() == c.front();
    bool compare3 = a.front() == c.back();

    if(compare1 && compare2 && compare3){
        cout << "good" << '\n';
    } else cout << "bad" << '\n';
    return 0;
}