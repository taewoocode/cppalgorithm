#include<bits/stdc++.h>
using namespace std;
string t;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
    }
    for(int i = 0; i < t.size(); i++){
        cout << t[0] << t[t.size() - 1];
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string t;
    
    for(int i = 0; i < n; i++) {
        cin >> t; 
        cout << t[0] << t[t.size() - 1] << endl; 
    }
    
    return 0;
}
