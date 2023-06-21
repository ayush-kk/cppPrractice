#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int key;
    cin>>key;

    int A[n][m];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }

    int r=0,c=m-1;
    bool flag=false;
    while(r<n && c>=0){
        if(A[r][c]==key){
            flag =true;
        }
        if (A[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }

    if(flag){
        cout<<key<<" founded";
    }else{
        cout<<key<<" Not found";
    }
    return 0;
}