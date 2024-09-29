//하드 코딩된 값
#include<bits/stdc++.h>
using namespace std;
map<string, int> mp; 
vector<string> keys = {"P1", "P2", "P3", "P4", "P5"}; 
vector<int> values = {3, 1, 4, 3, 2}; 
int main(){
    for(int i = 0; i < keys.size(); i++){
        mp[keys[i]] = values[i];
    }
    for (const auto& pair : mp) {
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
string key;
int value;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int total = 0;
    int waiting = 0;
    for(int i = 0; i < n; i++){
        waiting += v[i];
        total += waiting;
    }
    cout << total << '\n';
}