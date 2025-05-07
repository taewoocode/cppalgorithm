#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    int mid = 0;
    while(left <= right){
        int mid = left + (right - left) / 2;
        cout << mid << " : " << arr[mid] << '\n';
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        if(binary_search(arr.beign(), arr.end(), target))
        
    }
}



int binarySearch(vector<int> &arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    int mid = 0;
    while(true){
        int mid = left + (right - left) / 2;
        cout << mid << " : " << arr[mid] << '\n';
        if(right >= left && arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<int> arr {1,3,6,9,9,21,22,30};
    int target = 6;
    sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);
    if(result != -1){
        cout << "find" << '\n';
    } else {
        cout << "not find" << '\n';
    }

    return 0;
}