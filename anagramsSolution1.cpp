#include <iostream>
#include <unordered_map>
using namespace std;


/*
s1=nameless s2=salesmen 

freq1:       freq2
n:1          s:1 
a:1          a:1
m:1          l: 1
e:2          e:2
l:1          m:1 
s:2          n:1

time complexity = O(n)+O(n)+O(n)=O(n)
space Complexity=O(n)+O(n)=n 

*/
bool anagrams(string s1,string s2)
{
    if(s1.size() != s2.size())
    return false;
    
    unordered_map <char,int>freq1;
    unordered_map<char,int> freq2;
    for(char c:s1)
    {
        if(freq1.find(c) !=freq1.end())
        {
            freq1[c]++;
        }
        else
        {
            freq1[c]++;
        }
    }
    
    for(char c:s2)
    {
        if(freq2.find(c) !=freq2.end())
        {
            freq2[c]++;
        }
        else
        {
            freq2[c]++;
        }
    }
  for(auto it=freq1.begin();it!=freq1.end();it++)
  {
      if(freq2.find(it->first)==freq2.end()|| freq2[it->first]!=it->second)
      return false;
  }
  return true;
    
}
int main()
{
    cout<<anagrams("ali","lea");

    return 0;
}
