#include<bits/stdc++.h>
using namespace std;
int sum;
int k = 3;
int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    sum = 0;

    for(int i = 0; i < k; i++) sum += arr[i];

    for(int i = k; i < n; i++){
        sum += arr[i] = arr[i - k];
    }

    return 0;

}