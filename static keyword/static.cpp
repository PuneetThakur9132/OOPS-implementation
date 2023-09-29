// When a data member is declared as static , only one copy of the data is maintained for all objects of the class.
// Static data members are class members that are declared using static keywords. A static member has certain special characteristics. These are:

// Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
// It is initialized before any object of this class is being created, even before main starts.
// It is visible only within the class, but its lifetime is the entire program
// Static functions don't have this pointer.(as we do not call static function through object,so it will get nothing in this).
#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age = 20;
    int weight = 68;

    static int count;

    Human(){
        count++;
        cout<<"I AM INSIDE DEFAULT CONSTRUCTOR"<<endl;
    }
    static void update(){
        count++;
        // age++;   // static member function can only call or define the static data members of the class.
    }
    void sleep(){
        cout<<"He is sleeping"<<endl;
    }
    void eat(){
        cout<<"He is eating"<<endl;
    }
};

// int Human::count = 0;
// int main(){
//     Human chitti;
//     // cout<<Human::count<<endl;
//     // Human::count = 1;
//     // cout<<chitti.count<<endl;
//     chitti.count = 2;
//     cout<<Human::count<<endl;
//     chitti.update();
//     chitti.sleep();
//     chitti.eat();
//     return 0;
// }