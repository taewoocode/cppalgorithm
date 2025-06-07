#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, ret, temp1, temp;
vector<pair<ll,ll>> v(n); //보석무게와 가격을 저장해둠
vector<ll> vv(k);

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    cin >> n >> k;
    v.resize(n);
    vv.resize(k);
    
    //입력을 받는다.
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 0; i < k; i++){
        cin >> vv[i];   
    }

    //무게를 기반으로 오름차순 정렬
    /**
     * 정렬을 한 이유는 모든 조합을 탐색하는 가능성을 막기 위해서이다.
     * 보석과 가방을 정렬하지 않으면 모든 조합을 탐색해야 하는 상황이 발생할 수도 있다.
     */

    sort(v.begin(), v.end());
    sort(vv.begin(), vv.end());

    /**
     * priority_queue는 기본적으로 최대 힙으로 동작합니다. 
     * 즉, 내림차순 정렬된 상태에서 가장 큰 값을 우선으로 처리합니다. 
     * 따라서, priority_queue<ll>를 사용할 경우, 큐의 맨 위(top)에는 가장 큰 값이 위치하게 됩니다.
     */
    priority_queue<ll> pq;

    int j = 0;
    for(int i = 0; i < k; i++){
        while(j < n && v[j].first <= vv[i]){
            pq.push(v[j++].second);
        }
        if(pq.size()){
            ret += pq.top(); pq.pop();
        }
    }
    cout << ret << '\n';

    return 0;
}