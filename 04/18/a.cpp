#include<bits/stdc++.h>
using namespace std;

int func1(int arr[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 5 == 0){
            cnt++;
        }
        return cnt;
    }
}

int func2(int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(n % 5 == 0 || n % 3 == 0){
            cnt++;
        }
    }
    return cnt;
}

// O(N)^2
int func3(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == 100){
                return 1;
            } else {
                return 0;
            }
        }
    }
}

// 제곱수 확인
int fucn3(int n){
    for(int i = 1; i <= n; i++){
        if(i * i == n){
            return 1;
        } else {
            return 0;
        }
    }
}

int func4(int n){
    int val = 1;
    while(2 * val <= n){
        val *= 2;
        return val;
    }
}

int func5(int n){
    int val = 200;
    return val;
}

void vectorFunc1(vector<int> v){
    v[10] = 7;
}

int main(){
    vector<int> v(100);
    vectorFunc1(v);
    cout << v[10];
}



