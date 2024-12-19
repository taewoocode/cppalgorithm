#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        q.push(value);
    }
    while(!q.empty()){
        cout << q.front() << ' ';
        q.pop();
    }
    //요소를 출력한 뒤에 pop으로 제거해야 다음 원소를 확인할 수 있다.
    //제거해주지 않으면 무한루프에 빠질 수가 있다.
    return 0;
}