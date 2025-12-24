#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> solution(vector<int> number){
    int n = number.size();
    set<int> s;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            s.insert(number[i] + number[j]);
        }
    }
    vector<int> answer(s.begin(), s.end());
    return answer;
}

void solution2(vector<int> &number){
    int n = number.size();
    set<int> s;
    for(int i = 0; i < number.size(); i++){
        for(int j = i + 1; j < number.size(); j++){
            s.insert(number[i] + number[j]);
        }
    }
    number.clear();
    for(auto num : s){
        number.push_back(num);
    }
}

int main(){
    // vector<int> v {2,1,3,4,1};
    // vector<int> answer = solution(v);
    // for(int i = 0; i < answer.size(); i++){
        // cout << answer[i] << ' ';
    // }

    vector<int> test {5,0,2,7};
    solution2(test);
    for(const auto &number : test){
        cout << number << ' ';
    }

    return 0;

}
