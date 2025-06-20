#include<bits/stdc++.h>
using namespace std;
string solution(int index, string skip, string s){
    unordered_set<char> skip_set(skip.begin(), skip.end());
    string answer = "";
    for(auto c : s){
        char ch = c;
        int count = 0;

        while(count < index){
            ch++;
            if(ch > 'z') ch = 'a';
            if(skip_set.count(ch)){
                continue;
            }
            count++;
        }
        answer += ch;
    }
    return answer;
}


#include<bits/stdc++.h>
using namespace std;
int arr[1004];
int n;

int main(){

    int best = 0;
    for(int a = 0; a < n; a++){
        for(int b = a; b < n; b++){
            int sum = 0;
            for(int k = a; k <= b; k++){
                sum += arr[k];
            }
            best = max(best,sum);
        }
    }
}

void maximumSubArraySum(){
    int best = 0;
    for(int a = 0; a < n; a++){
        int sum = 0;
        for(int b = a; b < n; b++){
            sum += arr[b];
            best = max(sum,best);
        }
    }
    cout << best << '\n';
}