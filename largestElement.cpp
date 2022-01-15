#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


/*


time complexity = nlog(n)+1=nlog(n)
space Complexity=1

*/
int  largestElement(vector<int>v,int k)
{
   sort(v.begin(),v.end());
   return v[v.size()-k];
}
int main()
{
    vector<int> v={1,2,3,4,5,6,7};
    int largest=largestElement(v,2);
    cout<<"largest=="<<largest<<endl;

    return 0;
}
