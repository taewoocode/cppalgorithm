#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "hello world";
    size_t pos1 = str1.find("hello");
    cout << pos1 << '\n'; //문자열이 시작하는 위치(인덱스)를 반환하기 때문에 0을 반환한다.
    size_t pos2 = str1.find("w");
    cout << pos2 << '\n';
    return 0;
}