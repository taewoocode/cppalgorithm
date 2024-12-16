#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;

    vector<vector<int>> table(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> prefixSum(n + 1, vector<int>(n + 1,0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){

            //입력을 받는다.
            cin >> table[i][j]; 

            // prefixSum = sj - si - 1
            prefixSum[i][j] = table[i][j] + prefixSum[i - 1][j] + prefixSum[i][j - 1]- prefixSum[i - 1][j - 1];
        }
    }

    for(int q = 0; q < m; q++){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ret = prefixSum[x2][y2] - prefixSum[x1 - 1][y2] - prefixSum[x2][y1 - 1] + prefixSum[x1 - 1][y1 - 1];
        cout << ret << '\n';
    }

    return 0;
}