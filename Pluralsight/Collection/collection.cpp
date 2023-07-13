#include<iostream>

#include<string>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    vector<int> nums;

    for (int i=0;i<10;i++)
    {
        nums.push_back(i);
    }

    for(auto items:nums){
        cout<<items<<" ";
    }
    cout<<endl;

    // vector<string> words;

    // // words.push_back(2);

    // cout<<"enter three words";

    // for(int i=0;i<3;i++){
    //     string s;
    //     cin>>s;
    //     words.push_back(s);
    // }

    // for(auto items:words){
    //     cout<<items<<" ";
    // }
    // cout<<endl; 


    // cout<<" int vector nums has"<<nums.size()<<"elements."<<endl;

    // nums[5]=3;
    // nums[6]=-1;
    // nums[1]=99;


    // for(auto item:nums)  {
    //     cout<<item<<" ";
    // }
    // cout<<endl;


    // for(unsigned int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    // cout<<endl;

    // for(auto i=begin(nums);i !=end(nums);i++)
    // {
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    // sort(begin(words),end(words));

    // for(auto item :words){
    //     cout<<item<<" ";
    // }
    // cout<<endl;

    // int threes =count(begin(nums),end(nums),3);

    // cout<<" vector of ints has"<<threes<<" element with value 3"<<endl;

    // int tees=count(begin(words[0]),end(words[0]),"t");
    // cout<<"first word has "<<tees<<" letter t's"<<endl;

    return 0;
}
