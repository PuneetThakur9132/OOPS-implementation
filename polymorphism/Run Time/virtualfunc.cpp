#include <bits/stdc++.h>
using namespace std;

// class Shape{
//     public:
//     int get_area(){
//         cout<<"This to call parent class area\n";
//         return 1;

//     }

// };

// class Square : public Shape{
//     int area = 0;
//     public:
//     Square(int l , int b){
//         area = l*b;
//     }
//     int get_area(){
//         cout<<"This to call derived class area\n";
//         return area;

//     }

// };

// int main(){
//     Shape*s;
//     Square sq(10,20);
//     s = &sq;
//     s->get_area();
//     return 0;
// }


class Shape{
    public:
    virtual int get_area(){
        cout<<"This to call parent class area\n";
        return 1;

    }

};

class Square : public Shape{
    int area = 0;
    public:
    Square(int l , int b){
        area = l*b;
    }
    int get_area(){
        cout<<"Square Area: "<<area<<endl;
        return area;

    }

    void sleep(){
        cout<<"I am sleeping"<<endl;
    }

};

int main(){
    Shape*s = new Shape;
    Square sq(10,20);
    s = &sq;
    s->get_area();
    return 0;
}

 //Final Keyword
/* C++11 allows built-in facility to prevent
overriding of virtual function using final specifier*/