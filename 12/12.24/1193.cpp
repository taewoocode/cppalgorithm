#include<bits/stdc++.h>
using namespace std;
int N;
int main(){
    cin >> N;
    int i = 1;
    while(N > i){
        N -= i;
        i++;
    }

    //i가 8이라면 8번째 대각선을 찾는 것임
    if(i % 2 == 1){
        //i가 짝수일 때 분자는 i + 1 - N
        cout << i + 1 - N << '/' << N << '\n';
    } else {
        cout << N << '/' << i + 1 - N << '\n';
    }

    return 0;
}