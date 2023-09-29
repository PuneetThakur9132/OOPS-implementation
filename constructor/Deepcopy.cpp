#include <bits/stdc++.h>
using namespace std;

class Box{
    int length;
    int*breadth;
    int height;

    public:
    Box(){
        breadth = new int;
    }
    void set_dimension(int length1 , int breadth1 , int height1){
        length = length1;
        *breadth = breadth1;
        height = height1;
    }
    void show_data(){
        cout<<"Length = "<<length
            <<"\nBreadth = "<<*breadth
            <<"\nheight = "<<height<<endl;
    }

    Box(Box &sample){
        length = sample.length;
        breadth = new int;
        *breadth = *(sample.breadth);
        height = sample.height;
    }
};

int main(){
    Box B1;
    B1.set_dimension(10,14,16);
    B1.show_data();

    Box B2 = B1;
    B2.show_data();

    B1.set_dimension(10,14,19);
    B1.show_data();
    B2.show_data();

}