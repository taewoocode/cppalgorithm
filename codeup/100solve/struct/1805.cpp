#include<bits/stdc++.h>
using namespace std;

struct Gear {
    int id;
    int gas;
};

int main(){
    int n;
    cin >> n;
    vector<Gear> gears(n);

    for(int i = 0; i < n; i++){
        cin >> gears[i].id >> gears[i].gas;
    }

    sort(gears.begin(), gears.end(), [](Gear &a, Gear &b){
        return a.id < b.id;
    });

    for(int i = 0; i < n; i++){
        cout << gears[i].id << " " << gears[i].gas << '\n';
    }


    return 0;
}