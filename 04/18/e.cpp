#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int func(int arr[], int n){
    int occur[101] = {};
    for(int i = 0; i < n; i++){
        if(occur[100 - arr[i]] == 1){
            return 1;
        } else {
            occur[arr[i]] = 1;
        }
    }
}

#include<stdio.h>
int test(int n){
    if(n <= 1){
        return n;
    } else {
        return test(n - 1) + test(n - 3);
    }
}

int main(){
    printf("%d", test(7));
    return 0;
}