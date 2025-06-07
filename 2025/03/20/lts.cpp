#include<bits/stdc++.h>
using namespace std;
int n, a[1001], cnt[1002], ret;
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
    }

    for(int i = 0; i < n; i++){
        int maxValue = 0;
        for(int j = 0; j < i; j++){
            // cnt[j]의 길이가 maxValue보다 긴 경우에 갱신, a[i]가 왼쪽의 a[j] 보다 크거나
            if(a[j] < a[i] && maxValue < cnt[j]){
                maxValue = cnt[j];
            }
            cnt[i] = maxValue + 1;
            ret = max(ret, cnt[i]);
        }
        printf("%d\n", ret);
    }


    return 0;
}