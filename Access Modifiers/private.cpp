#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    int Length , Breadth;

    public:
    Rectangle(int Length,int Breadth){
        this->Length = Length;
        this->Breadth = Breadth;
    }

    void Display(){
        cout<<"\nLength "<<Length;
        cout<<"\nBreadth "<<Breadth;

    }
};


int main(){

    Rectangle R(10,15);
    R.Display();


}