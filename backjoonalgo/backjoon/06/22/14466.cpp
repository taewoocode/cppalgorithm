#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    int crossCount = 0;
    int lastPos[11];
    memset(lastPos, -1, sizeof(lastPos));

    for(int i = 0; i < n; i++){
        int id = v[i].first;
        int pos = v[i].second;

        if(lastPos[id] == -1){
            lastPos[id] = pos;
        } else if(lastPos[id] != pos){
            crossCount++;
            lastPos[id] = pos;
        }
    }

    cout << crossCount << '\n';

    return 0;
}