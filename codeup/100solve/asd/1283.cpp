#include <bits/stdc++.h>
using namespace std;

int main() {
    double a; // 투자 금액
    int b; // 일 수
    cin >> a >> b;

    double money = a;

    for (int i = 0; i < b; i++) {
        int percent;
        cin >> percent;
        money *= (1.0 + percent / 100.0); // 변동 적용
    }

    double profit = money - a;

    // 반올림된 순수익 계산
    int roundedProfit = round(profit);

    if (abs(profit) < 0.5) roundedProfit = 0;

    cout << roundedProfit << endl;

    if (roundedProfit > 0) cout << "good" << endl;
    else if (roundedProfit < 0) cout << "bad" << endl;
    else cout << "same" << endl;

    return 0;
}
