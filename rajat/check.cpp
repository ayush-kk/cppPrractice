#include <iostream>

using namespace std;

int main()
{
    cout << "Enter row and column" << endl;
    int r,c;
    cin>>r>>c;
    cout<<"Enter elements of matrix:"<<endl;
    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }
    cout<<"entered matrix is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element to be found"<<endl;
    int target;
    cin>>target;
    int i=0,j=c-1;
    bool flag=false;
    while(i<r && j>=0){
        if(m[i][j]==target){
            flag=true;
        }
        if(m[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    if(flag){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}