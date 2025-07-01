#include<bits/stdc++.h>
using namespace std;

void bubbleSort(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

void f(){
    bool ok = true;
    int n;
    cin >> n;
    int arr[n];
    sort(arr, arr + n);
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]) ok = false;
    }



}