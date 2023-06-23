#include<iostream>

#include<string>

using namespace std;

int main(){

    string s1="nincompoop";

    s1.insert(2,"lol");

    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;


    return 0;
}