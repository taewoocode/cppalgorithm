#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
    return a > b; // 앞에 숫자가 뒤에 숫자보다 클 때 참이므로 역순정렬이다.
}

vector<int> solution(vector<int> list){
    sort(list.begin(), list.end(), compare);
    list.erase(unique(list.begin(), list.end()));
}