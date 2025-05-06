#include<bits/stdc++.h>
using namespace std;

int func1(int arr[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 5 == 0){
            cnt++;
        }
    }
    return cnt;
}





















문제
대회장에 N명의 사람들이 일렬로 서있다. 
거기서 당신은 이름이 '가나다' 인 사람을 찾기 위해 사람들에게 이름을 물어볼 것이다. 
이름을 물어보고 대답을 듣는데까지 1초가 걸린다면 얼마만큼의 시간이 필요할까?