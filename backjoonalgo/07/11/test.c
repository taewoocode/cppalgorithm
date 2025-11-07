#include<stdio.h>
char arr[5] = {'B','A','D','E'};
char c = 'C';
int i;

int main(){
    printf("%d\n", arr[3] - arr[1]);

    for(i = 0; i < 4; i++){
        if(arr[i] > c){
            break;
        }
    }

    char temp = arr[i];
    arr[i] = c;
    i++;

    for(; i < 5; i++){
        char temp2 = arr[i];
        arr[i] = temp;
        temp = temp2;
    }

    for(i = 0; i < 5; i++){
        printf("%c", arr[i]);
    }

    return 0;
}

struct Student
{
    char gender;
    int age;

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct Student s = {'F',21};

    s.gender = 'M';
    printf("%c", s.gender);
    printf("%d",s.age);
}

#include<stdio.h>
int go(int n){
    if(n <= 1){
        return n;
    } else return go(n - 1) + go(n -3);
}

int main(){
    printf("%d", go(7));
    return 0;
}

int fn(char* a){
    int i = 0;
    for(i = 0;  a[i] != '\0'; i++);
    return i;
}

int main(){
    char a[10] = "Hello";
    printf("%d", fn(a));
}

