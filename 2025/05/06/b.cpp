#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays){
    vector<int> answer;
    unordered_map<string,int> genre_totals;
    unordered_map<string,vector<pair<int,int>>> genre_songs;

    // 장르별 총 재생 횟수와 곡 정보 저장
    for(int i = 0; i < genres.size(); i++){
        genre_totals[genres[i]] += plays[i];
        genre_songs[genres[i]].push_back({plays[i],i}); // 재생 수, 고유번호 저장   
    }
    vector<pair<string,int>> genre_order(genre_totals.begin(), genre_totals.end());
    sort(genre_order.begin(), genre_order.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });

    for(auto &[genre,_] : genre_order){
        auto a = genre_songs[genre];
        sort(a.begin(), a.end(), [](auto &a, auto &b){
            if(a.first == b.first) a.second < b.second;
            return a.first > b.first;
        });

        for(int i = 0; i < 2; i++){
        if(i < a.size()){
            answer.push_back(a[i].second);
            }
        }
    }

    return answer;
}