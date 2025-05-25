#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 1; i <= 100; i++){
        cout << i << ' ';
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << i << ' ';
    }
}

#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> a >> b;
    if(a > b) swap(a,b);
    for(int i = a; i <= b; i++){
        cout << i << ' ';
    }
}