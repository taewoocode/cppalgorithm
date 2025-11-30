#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> studentScores;
    studentScores["alice"] = 95;
    studentScores["BOB"] = 81;
    studentScores["Charile"] = 92;

    auto score1 = studentScores["alice"];

    auto it = studentScores.find("Charile");
    if(it != studentScores.end()){
        int scores = it -> second;
    }
    set<int> s {1,3,5,7,9};
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << '\n';
    }

    return 0;
}