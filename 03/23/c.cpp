#include<bits/stdc++.h>
using namespace std;

int solution(string binomial){ //"43 + 12"
    int opIdx = 0;
    char op;
    

    // 연산자 위치 찾기
    for(int i = 0; i < binomial.size(); i++){
        if(binomial[i] == ' ' && (binomial[i + 1] == '+' || binomial[i + 1] == '-' || binomial[i + 1] == '*')){
            opIdx = i + 1; //연산자 위치 저장
            op = binomial[opIdx]; //연산자 저장
            break; //break을 한 이유는 연산자를 한번 찾으면 더 이상 반복문을 순회할 이유가 없다.
        }
    }

    //숫자 추출
    int a = stoi(binomial.substr(0, opIdx - 1));
    int b = stoi(binomial.substr(opIdx + 2));

    if(op == '+') return a + b;
    if(op == '-') return a - b;
    if(op == '*') return a * b;

    return 0;

}


#include<bits/stdc++.h>
using namespace std;
const int n = 6;
int visited[n];
vector<int> v[n];
void dfs(int u){
    visited[u] = 1;
    for(auto i : v[u]){
        if(visited[i] == 0){
            dfs(i);
        }
    }
}