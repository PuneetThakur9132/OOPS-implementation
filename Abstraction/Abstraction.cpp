#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Sum{
    int x ,  y ,  z;

    public:
    void add(){
        cout<<"Enter Two Numbers : ";
        cin>>x>>y;
        z = x+y;
        cout<<endl;
        cout<<"And result is : "<<z<<endl;
    }
};

int main(){
    Sum sm;
    sm.add();
    return 0;
}