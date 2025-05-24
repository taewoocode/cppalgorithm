#include<bits/stdc++.h>
using namespace std;
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}