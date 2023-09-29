#include <bits/stdc++.h>
using namespace std;


class Human{
    public:
    int age;
    int weight;
};

class Male : public Human{
    public:
};

int main(){
    Male me;
    me.age = 20;
    me.weight = 67;
    cout<<me.age<<" "<<me.weight<<endl;
    return 0;
}