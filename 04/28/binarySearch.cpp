#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target){
    int left = arr[0];
    int right = arr.size();
    int mid = (arr.size() - arr[0]) / 2;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<int> arr {1,3,6,9,9,21,22,30};
    int target = 6;

    int result = binarySearch(arr, target);

    return 0;
}