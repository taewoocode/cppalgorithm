#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> pi;
    tuple<int,int,int> ti;

    pi = {1,2};
    int a,b;
    a = pi.first;
    b = pi.second;
    cout << a << " : " << b << '\n';

    int c;
    ti = make_tuple(1,2,3);
    a = get<0>(ti);
    b = get<1>(ti);
    c = get<2>(ti);

    cout << "&a: " << &a << ", &pi.first: " << &pi.first << '\n';
    cout << "&b: " << &b << ", &get<0>(ti): " << &get<0>(ti) << '\n';


    return 0;
}