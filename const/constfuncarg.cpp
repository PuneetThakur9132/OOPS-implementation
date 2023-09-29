#include <bits/stdc++.h>
using namespace std;

void Test(const int num){
    // num = num+10;  will throw error as argument in the function is constant.
    cout<<num<<endl;
}

int main(){
    int x = 10;
    Test(x);
}