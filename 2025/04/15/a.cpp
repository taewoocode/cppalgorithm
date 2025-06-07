#include<bits/stdc++.h>
using namespace std;

int myFunction(int x, int y){
    if(x < 2){
        x = y - x;
        return x;
    } else {
        int nx = x - 2;
        int ny = y - x;
        int ret = myFunction(nx,ny);
        return ret + x;
    }
}

int main(){
    int ret = myFunction(5,14);
    printf("d\n", ret);
}