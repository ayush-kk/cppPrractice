#include<iostream>
using namespace std;



int bitodec(int n){
    int ans=0;
    int x=1;
    
    while(n>0){
        int y=n%10;
        ans+=y*x;
        x*=8;
        n=n/10;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    cout<<bitodec(n)<<endl;

    return 0;

}