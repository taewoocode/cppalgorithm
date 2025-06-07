#include<bits/stdc++.h>
using namespace std;
int n;
int fibo(int num){
    if(num <= 1) return num;
    return fibo(num - 1) + fibo(num - 2);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    cout << fibo(n) << '\n';

    return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n;
	int DP[60];

	cin >> n;

	DP[0] = 0;
	DP[1] = 1;

	for (int i = 2; i <= n; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
	}

	cout << DP[n] << endl;
}