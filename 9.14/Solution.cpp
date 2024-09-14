#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // 주어진 정수 x가 회문인지 확인하는 함수
    bool isPalindrome(int x) {
        auto res = to_string(x);

        int start = 0;
        int end = res.size() - 1;

        while(start <= end){
            if(res[start] != res[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
