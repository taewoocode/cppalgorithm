#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    int arr[11];
    memset(arr, -1, sizeof(arr));

    int crossCount = 0;

    for(int i = 0; i < n; i++){
        int id = v[i].first;
        int pos = v[i].second;

        if(arr[id] == -1) {
            arr[id] = pos;
        } else if(arr[id] != pos) {
            crossCount++;
            arr[id] = pos;
        }
    }

    cout << crossCount << '\n';

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1004];
vector<pair<int,int>> pv;

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

int main(){
    FASTIO();
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> pv[i].first >> pv[i].second;
    }

    memset(arr, -1, sizeof(arr));

    int crossCount = 0;

    for(int i = 0; i < n; i++){
        int id = pv[i].first;
        int pos = pv[i].second;

        if(arr[id] != -1){
            arr[id] = pos;
        } else if(arr[id] != pos){
            crossCount++;
            arr[id] = pos;
        }
    }

    cout << crossCount << '\n';

}