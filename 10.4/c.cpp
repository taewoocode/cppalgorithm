#include<bits/stdc++.h>
using namespace std;
const int V = 4;
bool a[V][V] ={
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 0},
    {1, 0, 0, 0},
};
int main(){
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(a[i][j]){
                cout << i << "부터 " << j << "까지의 경로가 있습니다.";
                //정점을 탐색하는 로직
            }
        }
    }





    return 0;
}