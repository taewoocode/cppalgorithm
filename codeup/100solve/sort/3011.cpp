#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    int stage = 0;

    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
        stage++;
    }

    cout << stage << '\n';
    return 0;
}