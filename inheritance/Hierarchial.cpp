#include <bits/stdc++.h>
using namespace std;

class Employee{
    public:
    string profile;
};

class Intern : public Employee{
    public:
    int salary;
};

class FullTime : public Employee{
    public:
    int salary;
};

int main(){
    FullTime fte;
    Intern ite;
    fte.profile = "sde";
    fte.salary = 500000;
    ite.profile = "sde";
    ite.salary = 100000;
    cout<<fte.profile<<" "<<fte.salary<<endl;
    cout<<ite.profile<<" "<<ite.salary<<endl;
    return 0;
}