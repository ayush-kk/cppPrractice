#include<iostream>
using namespace std;

void increment(int a){//this is diff a
    a++;
}

int main(){

    int a=2;
    increment(a);//this is diff a

    cout<<a<<endl;//2

    

    return 0;

}