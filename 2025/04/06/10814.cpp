#include<bits/stdc++.h>
using namespace std;
vector<pair<int, string>> members;
vector<int> indices;
int n;

bool compare(int a, int b) {
    if (members[a].first != members[b].first)
        return members[a].first < members[b].first; 
    else
        return a < b;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        members.push_back({age,name});
        indices.push_back(i);
    }

    sort(indices.begin(), indices.end(), compare);
    
    for(int i = 0; i < indices.size(); i++){
        cout << members[indices[i]].first << " " << members[indices[i]].second << '\n';
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,string>> pv;
vector<int> idx;
int n, age;
string name;

bool compare(int a, int b){
    if(pv[a].first != pv[b].first){
        return pv[a].first < pv[b].first;
    } else {
        return a < b;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> age >> name;
        pv.push_back({age,name});
        idx.push_back(i);
    }

    sort(idx.begin(), idx.end(), compare);

    for(int i = 0; i < idx.size(); i++){
        cout << pv[idx[i]].first << " " << pv[idx[i]].second << '\n';
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

vector<pair<int,string>> pv;
vector<int> idx;
string name;
int age,n;

bool compare(int a, int b){
    if(pv[a].first != pv[b].first){
        return pv[a].first < pv[b].first;
    } else {
        return a < b;
    }
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

int main(){
    fastIO();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> age >> name;
        pv.push_back({age,name});
        idx.push_back(i);
    }

    sort(idx.begin(), idx.end(), compare);

    for(int i = 0; i < idx.size(); i++){
        cout << pv[idx[i]].first << " " << pv[idx[i]].second << '\n';
    }

    return 0;
}