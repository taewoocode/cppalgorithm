#include<bits/stdc++.h>
using namespace std;
int n;

void backtrack(string current, int depth){
    if(depth == n){
        cout << current << '\n';
        return;
    }
    
    backtrack(current + 'O', depth + 1);
    backtrack(current + 'X', depth + 1);
}

int main(){
    cin >> n;

    backtrack("",0);

    return 0;
}