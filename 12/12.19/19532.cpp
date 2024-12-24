#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c >> d >> e >> f;

     // 크래머의 법칙을 이용한 x, y 계산
    int denominator = a * e - b * d; // 판별식
    int x = (c * e - b * f) / denominator;
    int y = (a * f - c * d) / denominator;

    cout << x << " " << y << '\n';


    return 0;
}