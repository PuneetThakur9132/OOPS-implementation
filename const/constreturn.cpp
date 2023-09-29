#include <bits/stdc++.h>
using namespace std;

const int foo(int y){
    y--;
    return y;
}

int main(){
    int x = 10;
    int ans = foo(x);
    cout<<ans<<endl;
}