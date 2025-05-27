#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cin >> expr;

    int result = 0;
    int num = 0;
    char op = '+'; 

    for (int i = 0; i < expr.size(); ++i) {
        char ch = expr[i];
        
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0'); 
        } else {
            if (op == '+') result += num;
            else if (op == '-') result -= num;
            else if (op == '*') result *= num;
            else if (op == '/') result /= num;

            op = ch;
            num = 0;
        }
    }

    cout << result << endl;
    return 0;
}
