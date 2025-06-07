#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    string result = "";
    for(int i = 0; i < s.size(); i++){
        int digit = s[i] - '0';
        string binary = "";
        for(int j = 0; j < 3; j++){
            binary = char((digit % 2) + '0') + binary; // +'0'을 해서 숫자를 문자로 변환
            digit /= 2;
        }
        if(i == 0){
            while(binary[0] == '0' && binary.size() > 1){
                binary = binary.substr(1);
            }
        }
        result += binary;
    }
    cout << result << '\n';

    return 0;
}

/**
 * digit = 5 초기 상태:
binary = "" (빈 문자열).

첫 번째 비트 계산:

(5 % 2) = 1 → '1' (맨 끝자리).
binary = '1' + "" = "1".
두 번째 비트 계산:

digit = 5 / 2 = 2.
(2 % 2) = 0 → '0'.
binary = '0' + "1" = "01".
세 번째 비트 계산:

digit = 2 / 2 = 1.
(1 % 2) = 1 → '1'.
binary = '1' + "01" = "101".

첫 번째 반복:

binary[0] == '0'이므로,
binary = binary.substr(1) → "0100010".
두 번째 반복:

binary[0] == '0'이므로,
binary = binary.substr(1) → "100010".
종료 조건:

이제 binary[0] == '1'이므로 while문이 종료됩니다.
최종 결과: "100010".

 */