#include <bits/stdc++.h>
using namespace std;
class Human{
    public:
    int age;
    int weight;

    void sleep(){
        cout<<"He is sleeping"<<endl;
    }
    void eat(){
        cout<<"He is eating"<<endl;
    }


};
int main(){
    Human chitti;
    chitti.age = 25;
    chitti.weight = 70;
    chitti.sleep();
    chitti.eat();
}