#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;
    cout<<&i<<endl; // &->address of operator
    cout<<p<<endl;
    int *q = p;
    cout<<q<<endl;
    return 0;
}

/*POINTERS SIZE ---> 8 BYTES*/