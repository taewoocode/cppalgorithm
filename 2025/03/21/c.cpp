#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // 안전하게 top() 호출
    if (!st.empty()) {
        cout << st.top() << endl;
    }

    // 안전하게 pop() 호출
    if (!st.empty()) {
        st.pop();
    }

    return 0;
}
