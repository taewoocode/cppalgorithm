#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> m >> n;
    for(int i = m; i <= n; i++){
        if(i >= 2){
            bool isPrime = true;
            for(int j = 2; j * j <= i; j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                v.push_back(i);
            }
        }
    }
    if(v.empty()){
        cout << -1 << '\n'; 
    } else {
        for(auto i : v){
            sum += i;
        }
        int minPrime = *min_element(v.begin(), v.end());
        cout << sum << '\n';
        cout << minPrime << '\n';

    }
    return 0;
}