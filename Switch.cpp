#include<iostream>
using namespace std;
int main(){

    char button;
    cout<<"enter a character"<<endl;
    cin>>button;


    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"namste"<<endl;
        break;
    case 'c':
        cout<<"hola"<<endl;
        break;
    case 'd':
        cout<<"salut"<<endl;
        break;
    
    default:
        cout<<"learning more"<<endl;
        break;
    }

    return 0;

}