#include<bits/stdc++.h>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privcacies){
    vector<int> answer;

    unordered_map<string, int> termMap;
    for(string t : terms){
        string name;
        int months;
        stringstream ss(t);
        ss >> name >> months;
        termMap[name] = months;
    }

     auto toDays = [](string date) {
        int y, m, d;
        sscanf(date.c_str(), "%d.%d.%d", &y, &m, &d);
        return y * 12 * 28 + m * 28 + d;
    };

    int todayDays = toDays(today);


    for(int i = 0; i < privcacies.size(); i++){
        string date ,term;
        stringstream ss(privcacies[i]);
        ss >> date >> term;

        int startDays = toDays(date);
        int expireDays = startDays + termMap[term] * 28 - 1;

        if (expireDays < todayDays) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}