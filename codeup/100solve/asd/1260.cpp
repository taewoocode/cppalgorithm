#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int ret = 0;
    for(int i = a; i <= b; i++){
        if(i % 3 == 0){
            ret += i;
        }
    }
    cout << ret;


    return 0;
}


/**
 *  어떤 수 a, b가 주어진다.

    a와 b의 관계는 a <= b 이다.

    a에서 b까지의 수 중 3의 배수만 더하여 출력하시오.
 */


/**
 * 
 *  입력 예시   
    3 7

    출력 예시
    9
 * 
 * 
 */