#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


/*
array={1,2,5,5,5,7}

start=i


time complexity = nlog(n)+nlog(n)=nlog(n)
space Complexity=1

*/
vector<int> firstLastIndex(vector<int>v,int target)
{
    int first;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]==target)
       {
           first=i;
           while(i+1<v.size() && v[i+1]==target)
           {
               i++;
           }
           return {first,i};
       }
   }
   return {-1,-1};
    
}
int main()
{
    vector<int> v={1,2,3,4,5,5,5,7};
    vector<int>out=firstLastIndex(v,5);
    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<endl;
    }

    return 0;
}
