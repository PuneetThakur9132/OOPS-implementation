#include <bits/stdc++.h>
using namespace std;
// void print(int*p){
//     cout<<*p<<endl;
// }
// void incrementpointer(int*p){
//     p = p+1;
// }

// void increment(int*p){
//     (*p)++;
// }
// int main(){
//     int i = 10;
//     int*p = &i;

//     print(p);
//     cout<<p<<endl;
//     incrementpointer(p);
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     increment(p);
//     cout<<*p<<endl;
// }

int sum(int*a , int n){
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        ans += a[i];
    }
    return ans;
}

int main(){
    int a[10];
    for(int i=0 ; i<10 ; i++){
        a[i] = i;
    }
    cout<<sum(a,10)<<endl;
}