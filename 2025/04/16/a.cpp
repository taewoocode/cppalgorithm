#include<bits/stdc++.h>
using namespace std;
int num;
string solution(string s){
    stringstream ss(s);
    ss >> num;
    int minValue = num;
    int maxValue = num;

    while(ss >> num){
        if(minValue > num) minValue = num;
        if(maxValue < num) maxValue = num;
    }
    return to_string(minValue) + " " + to_string(maxValue);
}

// ========== 코드잇 ========= //

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    cout << s << '\n';
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
double d;
int main(){
    scanf("%lf", &d);
    printf("%.11lf\n", d);

    return 0;
}