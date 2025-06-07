#include<bits/stdc++.h>
using namespace std;

vector<int> heights {6,9,5,7,4};

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n = heights.size();
    
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = i-1; j >= 0; j--) {
            if (heights[j] >= heights[i]) {
                cout << j+1 << ' '; 
                flag = true;
                break;
            }
        }
        if (!flag) cout << 0 << ' ';
    }
}


