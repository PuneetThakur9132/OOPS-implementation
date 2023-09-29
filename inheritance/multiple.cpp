#include <bits/stdc++.h>
using namespace std;

class Mom{
    public:
    void display(){
        cout<<"class Mom"<<endl;
    }
};

class Dad{
    public:
    void display(){
        cout<<"class Dad"<<endl;
    }
};
class Child : public Mom , public Dad{
    public:
    void display(){
        cout<<"class Child"<<endl;
    }

};

int main(){
    Child ch;
    ch.display();
    ch.Mom::display();
    ch.Dad::display();
    return 0;
}