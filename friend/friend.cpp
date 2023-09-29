#include <bits/stdc++.h>
using namespace std;

class Animal{
    int age;
    int weight;
    public:
    Animal(){
        age = 25;
        weight = 40;
    }
    friend class Dog;  // this class is friend to the class Dog
};

class Dog{
    public:
    void display(Animal &t){
        cout<<endl<<"Age "<<t.age;
        cout<<endl<<"Weight "<<t.weight;
    }

};

int main(){
    Animal A;
    Dog D;
    D.display(A);
    return 0;
}