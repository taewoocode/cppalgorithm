#include<bits/stdc++.h>
using namespace std;
int a[1004];
int sy,sx;
int main(){
    int n;
    cin >> n;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;


    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        sy = 0, sx = 0;

        for(int j = 1; j <= 3; j++){
            if(a[j] == x) sx = j;
            if(a[j] == y) sy = j;
        }
        swap(a[sy],a[sx]);
    }

    cout << a[1] << '\n';
    

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[1004];
int cnt;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cnt = 2; // 2부터 시작
        for(int j = 0; j < m; j++){
            if(a[j] == a[i]) cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[1004];
int cnt;
int go(int n){
    int cnt = 0;
    cnt = 3;

}

int main(){
    int cnt = go(3);
    cout << cnt << '\n';

    cnt = go(3);
    cout << cnt << '\n';

    return 0;
}