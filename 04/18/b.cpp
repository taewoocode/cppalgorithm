#include<bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[],int& len){
    for(int i = len; i > idx; i--){
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int& len){
    for(int i = idx; i < len - 1; i++){
        arr[i] = arr[i + 1];
    }
    len--;
}

int main(){
    int arr[10] = {10,50,40,30,70,20};
    int len = 6;
    insert(3,6,arr,len);
    
    for(int i = 0; i < 7; i++){
        cout << arr[i] << ' ';
    }
    
    return 0;
}


