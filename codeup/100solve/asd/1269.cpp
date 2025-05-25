#include <iostream>
using namespace std;
int a, b, c, n;
int ret;

int main() {
    cin >> a >> b >> c >> n;
    ret = a;
    for (int i = 1; i < n; i++) {
        ret = ret * b + c;
    }

    cout << ret << '\n';

    return 0;
}
