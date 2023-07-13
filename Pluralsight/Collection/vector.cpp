#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums;
    for( int i=0;i<10;i++){
        nums.push_back(i);
    }

    for(auto n:nums){
        cout<<n<<" ";
    }
    cout<<'\n';




    vector<string> word;

    cout<<"enter 3 words"<<endl;

    for (int i=0;i<3;i++){
        string s;
        cin>> s;
        word.push_back(s);
    }

    for(auto item:word){
        cout<<item<<" ";
    }
    cout<<endl;

    cout<<"int vector nums has "<<nums.size()<< "elements."<<endl;

    nums[5]=3;
    nums[6]=-1;
    nums[1]=99;

    for(auto item:nums){
        cout<<item<<"  ";

    }cout<<endl;


    for(unsigned int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }cout<<endl;

    for(auto i=begin(nums);i!=end(nums);i++){
        cout<<*i<<" ";

    }
    cout<<endl; 


    sort(begin(word),end(word));
    for(auto item:word){
        cout<<item<<" ";
    }
    cout<<'\n';

    int threes= count(begin(nums),end(nums),3);

    cout<<"vector of int has "<<threes<<" elements with value 3"<<'\n';


    int tees =count(begin(word[2]),end (word[2]),'t');

    cout<<"Third word has "<<tees<<" letter t's"<<'\n';

    return 0;

}