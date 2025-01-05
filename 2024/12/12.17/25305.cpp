#include<bits/stdc++.h>
using namespace std;
int n,m,rowStudent,highStudent;
vector<int> v;
int main(){
    cin >> n >> m;
    v.resize(n);
    //응시자 수 입력
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    // 5,2라면 만약 5명중의 학생에서 2번째로 점수 높은 친구가 커트라인이됨
   sort(v.begin(), v.end(), greater<int>());
   cout << v[m -1] << '\n';

    return 0;
}