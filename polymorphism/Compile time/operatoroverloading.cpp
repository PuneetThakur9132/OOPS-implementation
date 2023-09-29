#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    int length = 0 , breadth = 0;

    public:

    void operator ++(){
        length +=2;
        breadth +=2;
    }
    void display(){
        cout<<"\n Length "<<length;
        cout<<"\n Breadth"<<breadth;
    }

};


int main(){
    Rectangle R;
    cout<<"\n Length and Breadth before increment ";
    R.display();
    ++R;
    cout<<"\n Length and Breadth after increment ";
    R.display();
    return 0;

}