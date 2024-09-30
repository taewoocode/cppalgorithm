#include<bits/stdc++.h>
using namespace std;
int cnt[10001];
int number;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number;
        cnt[number]++;
    }
    for(int i = 1; i <= 10000; i++){
        while(cnt[i]-- > 0){
            cout << i << '\n';
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int cnt[10001];
int number;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
        cnt[v[i]]++;
    }
    for(int i = 1; i <= 10000; i++){
        while(cnt[i]-- > 0){
            cout << i << '\n';
        }
    }
    return 0;
}
