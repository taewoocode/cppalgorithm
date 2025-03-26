#include<bits/stdc++.h>

using namespace std;

int solution(vector<string> strArr) {
    int count[31] = {0};
    int maxCount = 0;
    for(int i = 0; i < strArr.size(); i++){
        count[strArr[i].size()]++; // -> "ab"라면 count[2]에 1 증가
        cout << "count[i]: " << count[i] << '\n';
    }
    for(int i = 0; i < 30; i++){
        if(count[i] > maxCount){
            maxCount = count[i];
        }
    }
    cout << maxCount << '\n';
    return maxCount;
}

int main(){
    vector<string> a {"a","bc","d","efg","hi"};
    solution(a);
}