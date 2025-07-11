#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1;
    cout << (a << 4) << '\n';
    
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int S = 18; //10010
    int idx = 1;
    S &= ~(1 << idx); //1번째 비트를 뒤집는다.
    cout << S << '\n'; //16

    S |= (1 << idx);
    cout << S << '\n'; //1번째 비트를 킨다.

    return 0;
}