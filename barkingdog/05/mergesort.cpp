#include<bits/stdc++.h>
using namespace std;
int arr[10] = {3,2,7,116,62,235,1,23,55,77};
int n = 10;
int main(){
    for(int i = n - 1; i > 0; i--){
        int mxIdx = 0;
        for(int j = 1; j <= i; j++){
            if(arr[mxIdx] < arr[j]) mxIdx = j;
        }
        swap(arr[mxIdx], arr[i]);
    }
    return 0;
}

int main(){
    for(int i = n - 1; i > 0; i--){
        swap(*max_element(arr,arr+i+1),arr[i]);
    }
}