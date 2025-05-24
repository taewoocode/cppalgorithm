#include <bits/stdc++.h>
using namespace std;

vector<int> solution(const vector<int>& arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    //cout << arr[0] << " ";

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[i - 1]){
            answer.push_back(arr[i]);
            cout << arr[i] << " ";
        }
    }
    cout << '\n';
    for(auto i : answer){
        cout << i << ' ';
    }

    return answer;
}

int main(){
    vector<int> arr{1, 1, 3, 3, 0, 1, 1};
    solution(arr);
    return 0;
}
