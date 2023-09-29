#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10 , y = 8;
    int* const ptr = &x;
    // ptr = &y;  as a constant pointer we can only change its value not address
    *ptr = 15;
    cout<<*ptr<<endl;
    cout<<x<<endl;
}