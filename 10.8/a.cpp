#include<bits/stdc++.h>
using namespace std;
int ret, totalAmount = 12100;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<pair<int,int>> currency = {{10000,5},{5000,5},{1000,5},{100,5}};

    //내림차순으로 정렬
    sort(currency.rbegin(), currency.rend());

    //debuging
    for(auto i : currency){
        cout << i.first << " " << i.second << ' ';
    }

    for(auto c : currency){
        while(totalAmount >= c.first){
            totalAmount -= c.first;
            c.second--;
            ret++;
        }
    }
    if(totalAmount == 0){
        cout << ret << '\n';
    } else {
        cout << "불가능 합니다." << '\n';
    }

    return 0;
}