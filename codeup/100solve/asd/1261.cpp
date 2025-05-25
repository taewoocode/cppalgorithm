#include<bits/stdc++.h>
using namespace std;
int x;
bool found = false;
int main(){
    for(int i = 1; i <= 10; i++){
        cin >> x;
        cout << "found 조건 검사 전: " << found << '\n';
        if(!found && x % 5 == 0){
            cout << "found 조건 검사 후: " << found << '\n';
        
            cout << x;
            found = true;
        }
    }
    if(!found){
        cout << 0 << ' ';
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// bool found = false;
// int main(){
//     cout << found << '\n'; // 0
//     cout << !found << '\n'; // 1
//     return 0;
// }