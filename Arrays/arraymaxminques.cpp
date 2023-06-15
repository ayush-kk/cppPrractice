#include<iostream>
#include<climits>
using namespace std;

int main(){


    int n;
    cin>>n;

    int array[n];

    for(int i=1;i<=n;i++){
        cin>>array[i];
    }


    int minno=INT_MAX;
    int maxno=INT_MIN;


    for ( int i=1;i<=n;i++){
        // if (array[i]>maxno){
        //     maxno=array[i];
        // }

        // if (array[i]<minno){
        //     minno=array[i];
        // }
        
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
    }
    cout<<maxno<<" "<<minno;
    return 0;
}