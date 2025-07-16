#include<bits/stdc++.h>
using namespace std;
int cnt;
int main(){
    for(int i = 0; i < 3; i++){
        cnt = 0;
        for(int i = 0; i < 4; i++){
            int x;
            cin >> x;
            if(x == 0) cnt++;
        }

        if(cnt == 0) cout << "A" << '\n';
        else if(cnt == 1) cout << "B" << '\n';
        else if(cnt == 2) cout << "C" << '\n';
        else if(cnt == 3) cout << "D" << '\n';
    }

    return 0;
}