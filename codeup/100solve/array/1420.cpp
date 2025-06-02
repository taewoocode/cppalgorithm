#include<bits/stdc++.h>
using namespace std;
vector<pair<string,int>> ps;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 5; i++){
        string name;
        int score;
        cin >> name >> score;
        ps.push_back({name,score});
    }

    sort(ps.begin(), ps.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });

    cout << ps[2].first;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int score;
        cin >> name >> score;
        mp[name] = score;
    }

    vector<pair<string,int>> pv(mp.begin(), mp.end());
    sort(pv.begin(), pv.end(),[](auto &a, auto &b){
        return a.second > b.second;
    });

    cout << pv[2].first;

    return 0;
}