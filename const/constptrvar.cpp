//   constant pointer to constant variable
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=10 , y=7;
    const int* const ptr = &x;
    // ptr = &y; will throw error beacuse pointer is const
    // *ptr = 9; will throw error beacuse pointer is pointing to constant variable.
}