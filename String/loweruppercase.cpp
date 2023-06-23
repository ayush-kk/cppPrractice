#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    string s1="ahsdhfhskhfksh";
    string s2="AHSDHFHSKHFKSH";

    //convert to uppercase

    for(int i =0;i<s1.length();i++){
        if(s1[i]>='a' && s1[i]<='z')
        s1[i]-=32;
    }
    cout<<s1<<endl;


    //convert to lower Case

    for(int i=0;i<s2.size();i++){
        if(s2[i]>='A' && s2[i] <='Z')
        s2[i] +=32;
    }
        cout<<s2<<endl;

    return 0;
}