#include<iostream>
using namespace std;

int main(){
    int a=10;
    int * aptr=&a;

    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    

    int b=20;
    int *bptr;
    bptr=&b;

    cout<<&b<<endl;
    cout<<bptr<<endl;
    cout<<*bptr<<endl;
    
    *bptr=30;
    cout<<b<<endl;

    bptr++;
    cout<<bptr<<endl;
    return 0;
}