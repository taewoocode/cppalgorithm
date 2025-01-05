#include<bits/stdc++.h>
using namespace std;
int n;

bool compare(const string &a, const string &b){
    if(a.size() == b.size()){
        return a < b;
    }
    return a.size() < b.size();
}

int main(){
    cin >> n;
    set<string> words;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        words.insert(word);
    }

    vector<string> unique_words(words.begin(), words.end());
    sort(unique_words.begin(), unique_words.end(), compare);
    for(auto it : unique_words){
        cout << it << '\n';
    }
    return 0;
}