#include<iostream>

#include"Tweeter.h"

Tweeter::Tweeter(std::string first,
std::string last,
int arbitary,
std::string handle):Person(first,last,arbitary),
twitterhandle(handle)

{
    std::cout<< "constructing tweeter"<<
    twitterhandle<<std::endl;
}


Tweeter::~Tweeter(void)
{
    std::cout<<"destructing Tweeter"<<
    twitterhandle<<std::endl;
}