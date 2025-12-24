#include<bits/stdc++.h>
using namespace std;
int gold[1004], silver[1004], bronze[1004];
int id, g,s,b,n,k;
int myRank = 1;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> id >> g >> s >> b;
        gold[id] = g;
        silver[id] = s;
        bronze[id] = b;
    }

    for(int i = 1; i <= n; i++){
        if(gold[id] > gold[k]) myRank++;
        if(gold[id] == gold[k] && silver[id] > silver[k]) myRank++;
        if(gold[id] == gold[k] && silver[id] == silver[k] && bronze[id] > bronze[k]) myRank++;
    }

    cout << myRank << '\n';
    return 0;
}