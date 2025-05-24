#include<bits/stdc++.h>
using namespace std;
char c;
int main(){
    cin >> c;
    if(c <= 'a' && c >= 'z'){
        for(char ch = 'a'; ch <= c; ch++){
            cout << ch << ' ';
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
char c;
int main(){

    for(;;){
        scanf("%c", c);
        if(c == 'q'){
            break;
        } else {
            printf("%c", c);
        }
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

char c;

int main() {
    for (;;) {
        scanf(" %c", &c);  
        printf("%c\n", c); 
        if (c == 'q') {
            break;
        }
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int ret;

int main() {
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
        ret = i; // 항상 마지막으로 더한 수를 기억
        if (sum >= n) {
            break;
        }
    }

    cout << ret;

    return 0;
}




#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        ret = i;
        if(sum >= n) break;
    }

    cout << ret;

    return 0;
}



