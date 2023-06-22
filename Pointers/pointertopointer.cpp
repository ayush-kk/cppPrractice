#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *p;
    p=&a;

    cout<<*p<<endl;//10

    int **q=&p;
    cout<<*q<<endl;//)x61ff08
    cout<<**q<<endl;//10

}