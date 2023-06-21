#include<iostream>

using namespace std;

int main(){

    int n,m;

    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }



    // spiral order printing

    int r_start=0,r_end=n-1,c_start=0,c_end=m-1;

    while(r_start<=r_end && c_start<=c_end)
    {
        //row start
        for(int col=c_start;col<=c_end;col++){
            cout<<a[r_start][col]<<" ";

        }
        r_start++;

        //col start
        for(int row=r_start;row<=r_end;row++){
        cout <<a[row][c_end]<<" ";
        }
            c_end--;

        // row end
        for (int col=c_end;col>=c_start;col--){
        cout<<a[r_end][col]<<" ";

        }
        r_end--;

        // col end
        for(int row=r_end;row>=r_start;row--){
        cout<<a[row][c_start]<<" ";
        }
        c_start++;
    }
    return 0;
}