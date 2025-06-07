#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    int start = 0;
    string del = "abc";
    vector<string> answer;
    for(int i = 0; i < myStr.size(); i++){
        if(i == myStr.size() || del.find(myStr[i] != string::npos)){
            if(i > start){
                answer.push_back(myStr.substr(start, i - start));
            }
            start = i + 1;
        }
    }
    return answer;
}

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    int start = 0;
    string del = "abc";
    vector<string> answer;

    // 문자열 순회
    for (int i = 0; i < myStr.size(); i++) {
        // 구분자를 만났을 때
        if (del.find(myStr[i]) != string::npos) {
            if (i > start) {
                answer.push_back(myStr.substr(start, i - start));  // 구분자 이전 부분 추가
            }
            start = i + 1;  // 구분자 이후부터 새로 시작
        }
    }

    // 마지막 구분자 뒤의 문자열도 추가
    if (start < myStr.size()) {
        answer.push_back(myStr.substr(start));
    }

    // 빈 문자열이 있을 경우 "EMPTY"로 변경
    for (int i = 0; i < answer.size(); i++) {
        if (answer[i] == "") {
            answer[i] = "EMPTY";
        }
    }

    // 빈 문자열만 있을 경우 "EMPTY" 하나만 반환
    if (answer.empty()) {
        answer.push_back("EMPTY");
    }

    return answer;
}

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    int start = 0;
    string del = "abc";
    vector<string> answer;
    bool found = false; 


    for (int i = 0; i < myStr.size(); i++) {
        if (del.find(myStr[i]) != string::npos) {
            if (i > start) {
                answer.push_back(myStr.substr(start, i - start));
                found = true;  
            }
            start = i + 1; 
        }
    }

    if (start < myStr.size()) {
        answer.push_back(myStr.substr(start));
        found = true;  
    }

    for (int i = 0; i < answer.size(); i++) {
        if (answer[i] == "") {
            answer[i] = "EMPTY";
        }
    }

    if (!found) {
        answer.push_back("EMPTY");
    }

    return answer;
}



#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    int start = 0;
    string del = "abc";
    vector<string> answer;
    bool found = false;  // 구분자 이후에 부분이 있으면 true로 설정

    // 문자열 순회
    for (int i = 0; i < myStr.size(); i++) {
        // 구분자를 만났을 때
        if (del.find(myStr[i]) != string::npos) {
            // 구분자 전에 비어 있지 않은 문자열이 있으면 추가
            if (i > start) {
                answer.push_back(myStr.substr(start, i - start));
                found = true;  // 구분자 이후가 있음을 기록
            }
            start = i + 1;  // 구분자 이후부터 새로 시작
        }
    }

    // 마지막 구분자 뒤의 문자열도 추가
    if (start < myStr.size()) {
        answer.push_back(myStr.substr(start));
        found = true;  // 마지막 부분도 처리됨
    }

    // 빈 문자열이 있을 경우 "EMPTY"로 변경
    for (int i = 0; i < answer.size(); i++) {
        if (answer[i] == "") {
            answer[i] = "EMPTY";
        }
    }

    // 빈 문자열만 있을 경우 "EMPTY" 하나만 반환
    if (!found) {
        answer.push_back("EMPTY");
    }

    return answer;
}


#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    int start = 0;
    string del = "abc";  // 구분자
    vector<string> answer;
    
    // 문자열 순회
    for(int i = 0; i < myStr.size(); i++) {
        if(del.find(myStr[i]) != string::npos) {  // 구분자 'a', 'b', 'c'를 찾으면
            if(i > start) {  // 구분자 앞에 유효한 문자열이 있으면
                answer.push_back(myStr.substr(start, i - start));  // 그 문자열을 리스트에 추가
            }
            start = i + 1;  // start를 구분자 뒤로 이동
        }
    }

    // 마지막 부분 처리: 구분자 이후 남은 문자열
    if(start < myStr.size()) {
        answer.push_back(myStr.substr(start));
    }

    // 결과가 비어 있으면 "EMPTY" 추가
    if(answer.empty()) {
        answer.push_back("EMPTY");
    }

    return answer;

    //마지막 부분 처리
    if(start < myStr.size()){
        answer.push_back(myStr.substr(start));
    }
}
