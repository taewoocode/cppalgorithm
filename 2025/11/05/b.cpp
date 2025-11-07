#include<bits/stdc++.h>
using namespace std;
int n;
const int INF = 1e6;
int main(){
    cin >> n;
    int cnt = 0;
    for(int i = 2400; i < INF; i++){
        string a = to_string(i);
        if(a.find("2400") != string::npos){
            cnt++;
            cout << cnt << " : " << a <<  '\n';
        }
    }
    return 0;

}