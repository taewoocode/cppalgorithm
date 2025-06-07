#include<bits/stdc++.h>
using namespace std;

void func1(vector<int> v){
    v[10] = 7;
}

int main(){
    vector<int> v(100);
    func1(v);
    cout << v[10];
}

void insert(int idx, int num, int arr[], int& len){
    for(int i = len; i > idx; i--){
        arr[i] = arr[i - 1];
    }
    len++;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);


    return 0;
}