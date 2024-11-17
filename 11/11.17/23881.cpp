#include<bits/stdc++.h>
using namespace std;
int a,b,ret,count_;
vector<int> v;
int main(){
    cin >> a >> b;
    v.resize(a);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    for(int last = a - 1; last > 0; last--){
        int maxIndex = 0;
        for(int i = 0; i <= last; i++){
            if(v[i] > v[maxIndex]){
                maxIndex = i;
            }
        }
        if(maxIndex != last){
            swap(v[maxIndex], v[last]);
            count_++;
            if(count_ == b) {
                cout << min(v[maxIndex], v[last]) << " " << max(v[maxIndex], v[last]) << '\n';
                return 0;
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}

#include<bits/stdc++.h> // 표준 라이브러리 헤더 포함
using namespace std;

int a, b, ret, count_; // 변수 선언: a와 b는 입력값, ret은 결과값, count_는 스왑 횟수
vector<int> v; // 입력 값을 저장할 벡터 v 선언

int main() {
    cin >> a >> b; // 배열 크기(a)와 원하는 스왑 횟수(b) 입력
    v.resize(a); // 벡터 v의 크기를 a로 설정

    // 배열의 원소 입력
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    // 선택 정렬의 마지막 위치부터 탐색
    for (int last = a - 1; last > 0; last--) {
        int maxIndex = 0; // 현재 구간에서 가장 큰 값의 인덱스를 저장

        // 현재 구간(0 ~ last)에서 가장 큰 값을 찾음
        for (int i = 0; i <= last; i++) {
            if (v[i] > v[maxIndex]) { // 더 큰 값이 있으면 maxIndex 갱신
                maxIndex = i;
            }
        }

        // 현재 구간의 마지막 원소와 최대값 위치를 교환
        if (maxIndex != last) { // 최대값이 이미 제자리인 경우 스왑하지 않음
            swap(v[maxIndex], v[last]); // 최대값과 마지막 원소를 스왑
            count_++; // 스왑 횟수 증가

            // 스왑 횟수가 b와 같아지면 결과 출력
            if (count_ == b) {
                // 스왑한 두 값 중 작은 값과 큰 값을 출력
                cout << min(v[maxIndex], v[last]) << " " << max(v[maxIndex], v[last]) << '\n';
                return 0; // 프로그램 종료
            }
        }
    }

    // 스왑 횟수가 b에 도달하지 못한 경우 -1 출력
    cout << -1 << '\n';
    return 0; // 프로그램 종료
}
