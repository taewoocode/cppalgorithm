#include<bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
vector<int> v;
int temp;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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

    for(auto i : v){
        printf("%21f\n", i);
    }
    return 0;
}