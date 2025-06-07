#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    // 출근 희망 시각에 10분을 더한 시각 계산
    for (int i = 0; i < schedules.size(); i++) {
        bool allOnTime = true;
        
        // 출근 희망 시각 + 10분까지 도착해야 하므로
        int allowedArrivalTime = schedules[i] + 10;
        
        // 각 직원의 timelogs[직원][요일]을 확인
        for (int j = 0; j < 7; j++) {
            int realDay = (startday + j - 1) % 7; // 실제 날짜 계산 (0: 월요일, 6: 일요일)
            
            // 토요일(6), 일요일(7)은 출근 인정 시각을 체크하지 않음
            if (realDay == 5 || realDay == 6) continue;
            
            // 실제 출근 시
            int actualArrivalTime = timelogs[i][j];
            
            // 출근 시간이 늦으면
            if (actualArrivalTime > allowedArrivalTime) {
                allOnTime = false;
                break;
            }
        }
        
        if (allOnTime) {
            answer++;
        }
    }
    
    return answer;
}
