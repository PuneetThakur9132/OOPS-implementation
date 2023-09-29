#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4] = {1,2,3,4};
    cout<<a<<endl;
    cout<<&a[0]<<endl;  // in array a means &a[0];
    int*p = a;
    cout<<*p<<endl;  // print the value of a[0]
    cout<<*(p+1)<<endl; // print the value of a[1]
    cout<<*(p+2)<<endl; // print the value of a[2]
    return 0;
}