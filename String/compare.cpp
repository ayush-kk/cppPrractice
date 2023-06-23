#include<iostream>

#include<string>

using namespace std;

int main(){
    string s1="abc";
    string s2="abd";

    if (!s1.compare(s2))
    cout<<"equal string";
    else
    cout<<"not equal";
    return 0;
}