#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int S = 18;
    int idx = 0;
    S ^= (1 << idx); //0번째 비트를 킨다.  xor는 같은 것을 싫어한다 -> 같으면 0
                     //즉 0이면 1, 1이면 0으로 바꿔준다.

    cout << S << '\n';
}