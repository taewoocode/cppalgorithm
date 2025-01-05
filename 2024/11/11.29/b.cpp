#include<bits/stdc++.h>
using namespace std;

int n,m;
bool areFriends[10][10];
int countPairings(bool taken[10]){
    int firstFree = -1;
    for(int i = 0; i < n; i++){
        if(!taken[i]){
            firstFree = i;
            break;
        }
    }
    if(firstFree == -1) return 1;
    int ret = 0;
    for(int pairWith = firstFree + 1; pairWith < n; pairWith++){
        if(!taken[pairWith] && areFriends[firstFree][pairWith]){
        taken[firstFree] = taken[pairWith] = true;
        ret += countPairings(taken);
        taken[firstFree] = taken[pairWith] = false;
        }
    }
    return ret;
}

int main(){
    cin >> n;
    cin >> m;
    fill(&areFriends[0][0], &areFriends[0][0] + 10 * 10, false);

    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        areFriends[a][b] = true;
        areFriends[b][a] = true;
    }
    bool taken[10] = {false};
    cout << countPairings(taken) << '\n';
    return 0;
}


