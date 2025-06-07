/**
 * 경우의 수 - 순서와 상관있는 순열, 순서와 상관 없는 조합
 * 1,2,3에서 3개 순서와 관계없이 [1,2,3]
 * (1,2,3) (1,3,2) (2,1,3) (2,3,1) (3,1,2) (3,2,1)
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,3};
    do{
        for(int i : a) cout << i << " ";
        cout << '\n';
    }while(next_permutation(&a[0], &a[0 + 3]));
    return 0;
}

int main(){
    vector<int> v {1,2,3};
    do{
        for(int i : v) cout << i << " ";
        cout << '\n';
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}

 