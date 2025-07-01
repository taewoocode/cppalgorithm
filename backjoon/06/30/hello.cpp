#include<bits/stdc++.h>
using namespace std;
int ret;
int go(int depth) {
    if (depth == 3) return depth;
    int val = go(depth + 1);
    cout << "depth: " << depth << ", val: " << val << '\n';
    return max(val, depth);
}

int main(){
    go(0);
}
