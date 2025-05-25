#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    char a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        cout << (char) i << ' ';
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    char a,b;
    scanf("%c %c", &a, &b);
    for(int i = a; i <= b; i++){
        printf("%c", i);
    }


    return 0;
}