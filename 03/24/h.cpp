#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int M;

bool canEveryBodyEat(const vector<int> &menu);

int selectMenu(vector<int> menu, int food){
    if(food == M){
        if(canEveryBodyEat(menu)){
            return menu.size();
        }
        return INF;
    }

    int ret = selectMenu(menu, food + 1);
    menu.push_back(food);
    ret = min(ret, selectMenu(menu, food + 1));
    menu.pop_back();
    return ret;
}

vector<int> factor(int n){
    if(n == 1){
        return vector<int> (1,1);
    }
    vector<int> ret;
    for(int div = 2; n > 1; div++){
        n /= div;
        ret.push_back(div);
    
    }

    return ret;
}



void selectSort(vector<int> &a){
    for(int i = 0; i < a.size(); i++){
        int minIndex = ㅑ;
        for(int j = 0; j < a.size(); j++){
            if(a[minIndex] > a[j]){
                minIndex = j;
            }
            swap(a[i], a[minIndex]);
        }
    }
}