#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int n,sum,num;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    for(int i = 0; i < 3; i++){
        cin >> n;
        sum = 0;
        for(int j = 0; j < n; i++){
            cin >> num;
            sum += num;
        }
        if(sum == 0){
            cout << 0 << '\n';
        } else if(sum < 0){
            cout << "-" << '\n';
        } else if(sum > 0){
            cout << "+" << '\n';
        }
    }
    return 0;
}

/**
 * 위에 코드가 틀린 이유는 각 테스트케이스마다 초기화가 안되고 있다.
 * 각 테스트케이스마다 초기화를 할라면 어떻게 해야할까?
 */
