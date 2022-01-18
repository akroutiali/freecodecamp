#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


/*
Gas:[1,5,3,3]
Cost:[5,2,2,8]

1   5   3   3

5   2   2   8

1-5 <0
5 -2 =3 
3+(3-2)=4
4+3-8=-1<0

*/



bool  canTraverse(int gas [],int cost[],int start,int n)
{

int i=start;
int remaining=0;
bool isstart=false;
while((i!=start || !isstart) )
{
    isstart=true;
    remaining+=gas[i]-cost[i];
    if(remaining<0)
    return false;
    i=(i+1)%n;
}
return true;
}
    
int  startStation(int gas[],int cost[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(canTraverse(gas,cost,i,n))
        {
            return i;
        }
    }
    return -1;
}
/*
time complexity =n+(n-1)+(n-2)+...+1 =somme(n-k)for k=0 to k=n-1 =n(n+1)/2=O(n*n)
space complexity O(1)
*/
int main()
{
int gas []={1,5,3,3,5,3,1,3,4,5};
int cost[]={5,2,2,8,2,4,2,5,1,2};
int n=sizeof(gas)/sizeof(gas[0]);
 
 cout<< "start=="<<startStation(gas,cost,n);
}
