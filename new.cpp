#include <bits/stdc++.h>
using namespace std;

class car{
    string name;
    int num;

    public:
    car(string a , int n){
        cout<<"constructor is called"<<endl;
        this->name = a;
        this->num = n;
    }
    void display(){
        cout<<"NAME : "<<name<<endl;
        cout<<"NUMBER: "<<num<<endl;
    }

};


int main(){
    car*p = new car("toyota" , 1001);
    (*p).display(); // Ist Method
    p->display(); //2nd Methodr
    return 0;

}