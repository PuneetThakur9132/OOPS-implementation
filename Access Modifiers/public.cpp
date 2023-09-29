#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    public: // PUBLIC KEYWORD -->public memebers are accessible from any part of the program.
    int Length , Breadth;

    Rectangle(){
        Length = 5;
        Breadth = 5;
    }

    void Display(){
        cout<<"\nLength "<<Length;
        cout<<"\nBreadth "<<Breadth;
    }
 
};

int main(){

    Rectangle R;
    cout<<R.Length<<" "<<R.Breadth;
    R.Display();

}