#include<bits/stdc++.h>
using namespace std;
const int max_n = 1000005;
int data[max_n], pre[max_n], nxt[max_n];
int unused = 1;

void insert(int addr, int num){ //3 //3
    data[unused] = num; //data[3] = 3
    pre[unused] = addr; //pre[3] = 3
    nxt[unused] = nxt[addr]; 
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    // 1. 의상 종류별 개수를 저장할 해시맵 (unordered_map) 선언
    unordered_map<string, int> counts;

    // 2. clothes 배열을 순회하며 종류별 개수 계산
    for (const auto& item : clothes) {
        // item[1]은 의상의 종류 ("headgear", "eyewear" 등)
        counts[item[1]]++;
    }

    // 3. 조합의 수 계산을 위한 초기값 설정 (곱셈의 항등원 1)
    // 아무것도 안 입는 경우를 포함한 총 조합의 수를 계산
    int answer = 1;
    for (const auto& pair : counts) {
        int num_of_clothes = pair.second;
        // (해당 종류 의상 개수 + 1(안 입는 경우)) 를 곱함
        answer *= (num_of_clothes + 1); 
    }

    // 4. 최소 한 개의 의상은 입어야 하므로, 모든 의상을 입지 않은 경우 (1가지)를 제외
    return answer - 1;
}