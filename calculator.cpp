#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;

    char op;
    cout<<"Enter any operation to perform"<<endl;
    cin>>op;
    
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;
    
    default:
        cout<<"Enter a valid operator"<<endl;
        break;
    }


}