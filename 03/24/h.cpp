#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int M;

bool canEveryBodyEat(const vector<int> &menu);

int selectMenu(vector<int> menu, int food){
    if(food == M){
        if(canEveryBodyEat(menu)){
            return menu.size();
        }
        return INF;
    }

    int ret = selectMenu(menu, food + 1);
    menu.push_back(food);
    ret = min(ret, selectMenu(menu, food + 1));
    menu.pop_back();
    return ret;
}

#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321; // 매우 큰 값으로 초기화 (모두가 먹을 수 없는 경우를 나타냄)
int M; // 음식의 총 개수

// 모든 사람이 현재 메뉴(menu)를 먹을 수 있는지 판단하는 함수
bool canEveryBodyEat(const vector<int> &menu);

int selectMenu(vector<int> menu, int food) {
    // 기저 사례(Base Case): 모든 음식을 검사한 경우
    if (food == M) {
        // 현재 메뉴로 모든 사람이 먹을 수 있다면, 메뉴 크기 반환
        if (canEveryBodyEat(menu)) {
            return menu.size();
        }
        // 모든 사람이 먹을 수 없다면 INF 반환
        return INF;
    }

    // 1. 현재 음식을 메뉴에 포함하지 않는 경우를 계산
    int ret = selectMenu(menu, food + 1);

    // 2. 현재 음식을 메뉴에 포함한 경우를 계산
    menu.push_back(food); // 음식 추가
    ret = min(ret, selectMenu(menu, food + 1)); // 두 경우 중 최소값 선택
    menu.pop_back(); // 음식 제거 (원래 상태로 복구)

    // 3. 최종적으로 최소값 반환
    return ret;
}

vector<int> factor(int n){
    if(n == 1){
        return vector<int> (1,1);
    }
    vector<int> ret;
    for(int div = 2; n > 1; div++){
        n /= div;
        ret.push_back(div);
    
    }

    return ret;
}



void selectSort(vector<int> &a){
    for(int i = 0; i < a.size(); i++){
        int minIndex = 1;
        for(int j = i + 1; j < a.size(); j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}


int betterMaxSum(const vector<int> &a){
    int ret = 0;
    for(int i = 0; i < a.size(); i++){
        int sum = 0;
        for(int j = i; j < a.size(); j++){
            sum += a[j]; // -> 구간 i ~ j까지의 합이다.
            ret = max(ret, sum);
        }
    }
    return ret;
}

// 1부터 n까지의 합을 계산하는 재귀함수
int recursion(int n){
    if(n == 1) return 1;
    return n + recursion(n - 1);
}

int recursive(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;  // 1부터 n-1까지 더함
    }
    return sum;  // 최종 결과를 반환
}
