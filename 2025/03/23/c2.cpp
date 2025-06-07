#include<bits/stdc++.h>
using namespace std;

int solution(string binomial) { 
    int opIdx = 0;
    char op;

    for(int i = 0; i < binomial.size(); i++){
        if(binomial[i] == ' ' && (binomial[i + 1] == '+' || binomial[i + 1] == '-' ||
        binomial[i + 1] == '*'))
        opIdx = i + 1;
        op = binomial[opIdx];
        break;
    }
    //43 + 12
    int a = stoi(binomial.substr(0, opIdx - 1)); // -> 연산자 위치에서 1빼준 것
    int b = stoi(binomial.substr(opIdx + 2)); // -> 연산자 위치에서 1빼준 것

    if(op = '+') return a + b;
    if(op = '*') return a * b;
    if(op = '-') return a - b;

    return 0;

}