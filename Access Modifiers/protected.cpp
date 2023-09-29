#include <bits/stdc++.h>
using namespace std;

class Parent{
    protected:
    int id_protected;
};

class Child : public Parent{

    public:
    void set_id(int a){
        id_protected = a;
    }

    void display(){
        cout<<"Your Id is : "<<id_protected<<endl;
    }

} ;

int main(){
    Child c1;
    c1.set_id(101);
    c1.display();
    return 0;
}