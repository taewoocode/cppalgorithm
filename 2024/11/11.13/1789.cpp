#include<bits/stdc++.h>
using namespace std;
#define ll long long  

int main() {
    ll s;
    cin >> s;

    ll low = 1, high = 2e9;  
    ll ans = 0;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll sum = mid * (mid + 1) / 2;

        if (sum <= s) {
            ans = mid;  
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << '\n';  

    return 0;
}
