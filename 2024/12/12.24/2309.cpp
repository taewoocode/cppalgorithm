#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v(9);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < 9; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    do{
        int sum = 0;
        for(int i = 0; i < 7; i++){
            sum += v[i];
        }
        if(sum == 100){
            for(int i = 0; i < 7; i++){
                cout << v[i] << '\n';
            }
            return 0; 
        }
    } while(next_permutation(v.begin(), v.end()));
    

    return 0;
}