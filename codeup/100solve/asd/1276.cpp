#include<bits/stdc++.h>
using namespace std;
int n;

void makeFactorial(int n, int &ret){
    ret = 1;
    for(int i = 1; i <= n; i++){
        ret *= i;
    }
   
}

int main(){
    cin >> n;
    int ret;

    makeFactorial(n,ret);
    cout << ret;
    return 0;
}







// int main(){
//     cin >> n;
//     cout << "ret의 초기값: " << ret << '\n';
//     for(int i = 1; i <= n; i++){
//         ret *= i;
//         cout << "for문 안의 ret의 값: " << ret << '\n';
//     }
//     cout << "최종 ret의 값: " << ret << '\n';
//     cout << ret;
//     return 0;
// }
