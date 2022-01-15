#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


/*
time complexity = nlog(n)+nlog(n)=nlog(n)
space Complexity=1

*/
bool anagrams(string s1,string s2)
{
    if(s1.size() != s2.size())
    return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    return true;
    else
    return false;
    
}
int main()
{
    cout<<anagrams("ali","lia");

    return 0;
}
