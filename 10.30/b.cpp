#include <bits/stdc++.h>
using namespace std;
int ret;

int main() {
    int n;
    cin >> n; 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i < n; i++) {
        int sum = i; 
        int num = i; 

        while (num > 0) {
            sum += num % 10; 
            num /= 10; 
        }

        if (n == sum) {
            ret = i; 
            break; 
        }
    }
    cout << ret << '\n';
    return 0;
}
