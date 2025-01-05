#include<bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
vector<int> v;
int temp;
int n;
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%ln", &temp);
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
        printf("%21f/n", i);
    }
    return 0;
}