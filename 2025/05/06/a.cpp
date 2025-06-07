#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string,int> genre_total;
    unordered_map<string,vector<pair<int,int>>> genre_songs;

    for(int i = 0; i < genres.size(); i++){
        genre_total[genres[i]] += plays[i];
        genre_songs[genres[i]].push_back({plays[i],i});
    }

    vector<pair<string,int>> genre_order(genre_total.begin(), genre_total.end());
    sort(genre_order.begin(), genre_order.end(), [](auto& a, auto& b){
        return a.second > b.second;
    });

    for(auto& [genre, _] : genre_order){
        auto& songs = genre_songs[genre];

        sort(songs.begin(), songs.end(), [](auto &a, auto &b){
            if(a.first == b.first) a.second < b.second;
            return a.second > b.second;
        });

        for(int i = 0; i < 2; i++){
            if(i < songs.size()){
                answer.push_back(songs[i].second);
            }
        }
    }

    return answer;
}



#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> genre_total;
    unordered_map<string, vector<pair<int, int>>> genre_songs;

    for (int i = 0; i < genres.size(); i++) {
        genre_total[genres[i]] += plays[i];  
        genre_songs[genres[i]].push_back({plays[i], i});  
    }

    vector<pair<string, int>> genre_order(genre_total.begin(), genre_total.end());
    sort(genre_order.begin(), genre_order.end(), [](auto& a, auto& b) {
        return a.second > b.second; 
    });

    for (auto& [genre, _] : genre_order) {
        auto& songs = genre_songs[genre];

        sort(songs.begin(), songs.end(), [](auto& a, auto& b) {
            if (a.first == b.first) return a.second < b.second; 
            return a.first > b.first; 
        });

        for (int i = 0; i < 2; i++) {
            if (i < songs.size()) {
                answer.push_back(songs[i].second);
            }
        }
    }

    return answer;
}
