#include "Person.h"
#include<iostream>
using namespace std;

Person::Person(string first,string last,
    int arbitary): firstname(first),lastname(last),
    arbitarynumber(arbitary)

    {
        cout<<"CONSTRUCTING"<<GetName()<<endl;
    }

    Person::~Person()
    {
        cout<<"Destructing"<<GetName()<<endl;
    }

    string Person::GetName() const
    {
        return firstname+" "+ lastname;
    }