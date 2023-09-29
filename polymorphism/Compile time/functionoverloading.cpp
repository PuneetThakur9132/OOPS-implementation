#include <bits/stdc++.h>
using namespace std;

class Calculator{

    public:
    int add(int a , int b){
        return a+b;
    }

    int add(int a , int b , int c){
        return a+b+c;
    }

    float add(float a , int b){
        return a+b;
    }

    float add(int a , float b){
        return a+b;
    }

};

int main(){
    Calculator calc;
    cout<<"Add two integers : "<<calc.add(23,22)<<endl;
    cout<<"Add three integers : "<<calc.add(20,17,18)<<endl;
    float a , b;
    a = 12.23;
    cout<<"Add one float and one integer : "<<calc.add(a,18)<<endl;
    b=19.7;
    cout<<"Add one integer and one float : "<<calc.add(5,b)<<endl;
    return 0;

}