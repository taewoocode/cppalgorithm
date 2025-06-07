#include<bits/stdc++.h>
using namespace std;
int solution(string myString, string pat){
    int answer = 0;
    size_t pos = 0;
    while((pos = myString.find(pat, pos)) != string::npos){
        answer++;
        pos++;
    }
    return answer;
}

#include<bits/stdc++.h>
using namespace std;
int solutionm(string myString, string pat){
    int answer = 0;
    size_t pos = 0;
    //문자를 찾으면 문자열의 처음 위치를 반환한다.
    while((pos = myString.find(pat,pos)) != string::npos){
        answer++;
        pos++; // 다음 탐색위치로 인덱스 조정
    }  
    return answer;
}

#include <bits/stdc++.h>
using namespace std;

string solution2(string myString, string pat) {
    string answer = "";
    size_t pos = 0, lastPos = string::npos;

    // myString에서 pat를 찾으면서 마지막 위치를 갱신
    while ((pos = myString.find(pat, pos)) != string::npos) {
        lastPos = pos; // pat를 찾은 위치를 저장
        pos++; // 다음 검색을 위해 pos를 한 칸 앞으로 이동
    }

    // 마지막으로 발견한 위치(lastPos)까지 자르기
    if (lastPos != string::npos) {
        answer = myString.substr(0, lastPos + pat.size());
    }

    return answer;
}

#include<bits/stdc++.h>
using namespace std;

string solution2(string myString, string pat) {
    string answer = "";
    int pos = 0; 
    int lastPos = string::npos;

    while((pos = myString.find(pat,pos))!= string::npos){
        lastPos = pos;
        pos++; // 다음 위치 탐색을 위해 1 증가
    }
    if(lastPos != string::npos){

        //문자열 잘라내기 
        answer = myString.substr(0, lastPos + pat.size());

    }
}
