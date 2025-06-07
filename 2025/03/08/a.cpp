#include<bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int> &arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}


int binarySearch2(const vector<int> &arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}

int main(){
    vector<int> v {1,2,3,4,5,6,7};
    sort(v.begin(), v.end());
    int target = 6;
    int ret = binarySearch(v, target);
    if(ret != -1){
        cout << ret << '\n';
    } else {
        cout << "NOT FOUND" << '\n';
    }


    return 0;
}