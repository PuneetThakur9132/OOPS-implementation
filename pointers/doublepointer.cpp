#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 10;
    int*p = &i;
    int**p2 = &p;

    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;
}


/* p2 likhne se jo p2 ke andar value store h vo print hogi
   *p2 likhne jise ye point kr rha h uski value print hogi i.e p
   **p2 likhne p jise point kr rha h uski value print hogi */