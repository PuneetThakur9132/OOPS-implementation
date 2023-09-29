#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    string cartype;
};

class Toyota : public Car{
    public:
    string country;
};

class Innova: public Toyota{
    public:
    int price;
};

int main(){
    Innova In;
    In.cartype = "hatchback";
    In.country = "india";
    In.price = 300000;
    cout<<In.cartype<<" "<<In.country<<" "<<In.price<<endl;
    return 0;

}