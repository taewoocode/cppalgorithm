#include <bits/stdc++.h>
using namespace std;
int a[100001], cnt[100001];
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    long long ret = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        // a[end]가 이미 등장했다면 중복이 없는 상태가 될 때까지 start를 이동
        while (cnt[a[end]] > 0) {
            cnt[a[start]]--;
            start++;
        }
        cnt[a[end]]++; // a[end]를 포함
        ret += (end - start + 1); // 현재 구간의 부분 수열 개수 누적
    }

    printf("%lld\n", ret);
    return 0;
}
