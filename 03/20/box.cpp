#include <string>
#include <vector>
using namespace std;

int solution(int n, int w, int num) {
    int total_rows = ((n - 1) / w) + 1;
    int totalRows = ((n - 1) / w) + 1;
    
    // 타겟 상자가 위치한 층 (0-indexed)
    int target_row = (num - 1) / w;
    // 타겟 상자 배치(order) 내 위치
    int pos = (num - 1) % w;
    
    // 타겟 상자의 실제 열 위치 (배치 방향에 따라 달라짐)
    int target_col;
    if (target_row % 2 == 0) {  // 짝수층: 왼쪽에서 오른쪽으로 배치
        target_col = pos;
    } else {                  // 홀수층: 오른쪽에서 왼쪽으로 배치
        target_col = w - 1 - pos;
    }
    
    // 타겟 상자 자체를 포함하여, 위쪽에 있는 (동일한 열의) 상자 개수 계산
    int result = 1;  // 타겟 상자 자신
    
    // 타겟 상자보다 위쪽의 층을 확인
    for (int r = target_row + 1; r < total_rows; r++) {
        int boxes_in_row;
        // 마지막 층이고 채워진 상자 수가 w가 아니라면
        if (r == total_rows - 1 && (n % w != 0)) {
            boxes_in_row = n % w;
        } else {
            boxes_in_row = w;
        }
        
        if (r % 2 == 0) {  // 짝수층: 왼쪽에서 오른쪽 → 채워진 열은 0 ~ (boxes_in_row - 1)
            if (target_col < boxes_in_row) {
                result++;
            }
        } else {           // 홀수층: 오른쪽에서 왼쪽 → 채워진 열은 (w - boxes_in_row) ~ (w - 1)
            int start_col = w - boxes_in_row;  // 시작 열 번호
            if (target_col >= start_col && target_col < w) {
                result++;
            }
        }
    }
    
    return result;
}
