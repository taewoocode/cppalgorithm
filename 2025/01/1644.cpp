#include<bits/stdc++.h>
using namespace std;

int lo = 0, hi = 0;  // 슬라이딩 윈도우의 인덱스
// 소수인 경우에 false, 소수가 아닌 경우에 true;
bool che[4000001];  // 전역변수시 모든 값은 false로 초기화가 되어있다.
int n, a[2000001], p = 0, ret = 0, sum = 0;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    scanf("%d", &n);

    // 에라토스테네스의 체를 사용해 소수 구하기
    for(int i = 2; i <= n; i++){
        if(che[i]) continue; // 이미 소수가 아닌 숫자는 건너뛴다.
        for(int j = 2 * i; j <= n; j += i){
            che[j] = true; // 소수가 아니면 true로 표시
        }
    }

    // 소수들을 배열에 저장
    for(int i = 2; i <= n; i++){
        if(!che[i]) {
            a[p++] = i; // 소수만 배열 a에 저장
        }
    }

    // 슬라이딩 윈도우 기법으로 구간 합을 계산하여 n이 되는 구간을 찾기
    while(hi < p) {
        if(sum < n) {
            sum += a[hi++];
        } else if(sum > n) {
            sum -= a[lo++];
        } else { // sum == n
            ret++;      // sum이 n과 같을 때, 그 구간을 찾았으므로 ret를 증가
            sum += a[hi++]; // sum을 바꾸기 위해 hi를 증가
        }
    }

    printf("%d\n", ret);
    return 0;
}
