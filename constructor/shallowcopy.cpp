#include <bits/stdc++.h>
using namespace std;

class Box{
    int length , breadth , height;

    public:
    void set_dimension(int length1 , int breadth1 , int height1){
        length = length1;
        breadth = breadth1;
        height = height1;
    }
    void show_data(){
        cout<<"Length = "<<length
            <<"\nBreadth = "<<breadth
            <<"\nheight = "<<height<<endl;
    }
};

int main(){
    Box B1;
    B1.set_dimension(10,20,30);

    B1.show_data();

    Box B2 = B1; // COPY CONSTRUCTOR INVOKE
    B2.show_data();

}