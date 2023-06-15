#include<iostream>
using namespace std;

int main(){

    int n;
    cin >>n;


    // int array[4]={1,2,3,4};

    int array[n];

    for  (int i=1;i<=n;i++){

        cin>>array[i];
    }


    for (int i=1;i<=n;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}