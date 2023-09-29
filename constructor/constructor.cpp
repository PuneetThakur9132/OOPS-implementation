#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age;
    int weight;
    // default constructor
    Human(){
        cout<<"I am inside default constructor-creating object"<<endl;
    }

    // parametrized constructor
    Human(int age , int weight){
        this->age = age;
        this->weight = weight;
        cout<<"I am inside parametrized constructor by passing both age and weight "<<age<<" "<<weight<<endl;
    }

    //parametrized constructor
    //constructor overloading
    Human(int age){
        this->age = age;
        cout<<"I am inside parametrized constructor by passing only age "<<age<<" "<<weight<<endl;
    }
    //copy constructor
    Human(const Human &h){
        age = h.age;
        weight = h.weight;
        cout<<"I am inside copy constructor "<<age<<" "<<weight<<endl;
    }

    void sleep(){
        cout<<"He is sleeping"<<endl;
    }
    void eat(){
        cout<<"He is eating"<<endl;
    }


};

int main(){
    Human chitti;
    cout<<"I am outside the constructor"<<endl;
    chitti.age = 25;
    chitti.weight = 40;
    Human(27,70);
    Human(30);
    Human kapil = chitti;
    chitti.sleep();
    chitti.eat();

}