#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    vector<int> heights {6, 9, 5, 7, 4};
    stack<int> s;  
    for (int i = 0; i < heights.size(); i++) {
        while (!s.empty() && heights[s.top()] < heights[i]) {
            s.pop();  
        }
        if (!s.empty()) {
            cout << s.top() + 1 << ' ';  
        } else {
            cout << 0 << ' ';  
        }

        s.push(i);
    }

    cout << endl;
    return 0;
}
#include<bits/stdc++.h>
int n,m, tmp, cnt;
vector<int> v;
stack<int> s;

