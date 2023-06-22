#include <iostream>
using namespace std;

int main(){
    int a=10;
    int * aptr=&a;

    // cout<<*aptr<<endl;//10
    // cout<<aptr<<endl;//0x61ff08
    // cout<<&a<<endl;//0x61ff08

    cout<<*aptr<<endl;//10
    *aptr=20;
    cout<<a<<endl;//20

    cout<<"=============="<<endl;

    int arr[]={10,20,30};
    cout<<*arr<<endl;//10


    cout<<"=============="<<endl;



    //will give error bcz not right method
    // int *ptr=arr;
    // for(int i=0;i<3;i++){
    //     cout<<*ptr<<endl;
    //     arr++;
    // }
    

    //right method
    
    // int *ptr=arr;
    // for(int i=0;i<3;i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }



    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        
    }


    return 0;
}