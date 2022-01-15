#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


/*
array={1,2,5,5,5,7,8}
  left=0
  reight=6 
  
  mid =0+6/2=3


time complexity = log(n)
space Complexity=O(1)

*/
int findFirstIndex(vector<int>v,int target)
{
    if(v[0]==target)
    return 0;
    int left=0;
    int right=v.size()-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]==target && v[mid-1]<target)
        return mid;
        
        else if(v[mid]<target)
        left=mid+1;
        else
        right=mid-1;
    }
    return -1;
}

int findLastIdex(vector<int> v,int target)
{
    if(v[v.size()-1] ==target)
    return v.size()-1;
    
    int left=0;
    int right =v.size()-1;
    
    while(left<=right)
    {
        int mid=(left+right)/2;
        
        if(v[mid]==target && v[mid+1]>target)
        {
            return mid;
        }
        
        else if(v[mid]>target)
        right=right-1;
        else
        left=left+1;
    }
    
    return -1;
}

int main()
{
    vector<int> v={1,2,5,5,5,7,8};
    vector<int>out={findFirstIndex(v,5),findLastIdex(v,5)};
    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<endl;
    }

    return 0;
}
