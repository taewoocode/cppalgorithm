#include<bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> &progress, vector<int> &speeds){
    vector<int> answer;
    int n = progress.size();
    vector<int> left_days(n);
    for(int i = 0; i < n; i++){
        left_days[i] = ceil((100.0 - progress[i]) / speeds[i]);
    }

    int cnt = 0;
    int max_days = left_days[0];

    for(int i = 0; i < n; i++){
        if(left_days[i] < max_days){
            cnt++;
        } else {
            answer.push_back(cnt);
            cnt = 1;
            max_days = left_days[i];
        }
    }
    answer.push_back(cnt);
    return answer;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> progress {93, 30, 55};
    vector<int> speeds {1,30,55};
    auto ret = solution(progress, speeds);

    
}