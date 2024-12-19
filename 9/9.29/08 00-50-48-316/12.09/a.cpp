/**
 * 성적이 좋지 않은 학생 5명을 선발하여 성적이 낮은 순서대로 출력하는 프로그램
 */

#include<bits/stdc++.h>
using namespace std;
int n;
double temp;
priority_queue<double> pq;
vector<double> v;
int main(){
    //우선순위 큐를 써서 계속 5명만 빼내는 방식으로 문제를 해결한다.
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &temp);
        if(pq.size() == 5){
            pq.push(temp);
            pq.pop();
        } else {
            pq.push(temp);
        }
    }
    while(pq.size()){
        v.push_back(pq.top());
        pq.pop();
    }

    reverse(v.begin(), v.end());
    for(double i : v) printf("%.21f\n", i);
    return 0;
}

