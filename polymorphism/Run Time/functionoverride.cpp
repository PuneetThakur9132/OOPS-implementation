/*Function overriding ---> when derived class has function definiton for the one of the base class function
   Then that base class function is said to be overriden*/

#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"HIIII"<<endl;
    }

};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"WOOF"<<endl;
    }
};

int main(){
    Dog d;
    d.speak();
    return 0;
}
