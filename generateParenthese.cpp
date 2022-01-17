#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


/*                                0,4
                        '(' 1,3
                    '('2,2    ')' -1,3
                '('1,3   ')' 1,1
            '('0,4  ')' 1,1

*/


void genrateParantheses_helper(int n,int diff,vector<string>&comb,vector<vector<string>>&combs);
vector<vector<string>> genrateParantheses(int n)
{
    vector<string>comb;
    vector<vector<string>>combs;
    genrateParantheses_helper(n*2,0,comb,combs);
    return combs;
    
}
void genrateParantheses_helper(int n,int diff,vector<string>&comb,vector<vector<string>>&combs)
{
    if(diff <0 && diff<n)
    return;
    if(n==0)
    {
        if(diff==0)
        combs.push_back(comb);
    }
    
    else
    {   comb.push_back("(");//1
        genrateParantheses_helper(n-1,diff+1,comb,combs);//T(n-1)
        comb.pop_back();//1
        comb.push_back(")");//1
        genrateParantheses_helper(n-1,diff-1,comb,combs);//T(n-1)
        comb.pop_back();//1
        //time complexity O(n)=2T()
        //T(n)=2T(n-1)+1=2(2T(n-2)+1)+1=4T(n-2)+3
        //T(n)=4(2T(n-3)+1)+3=8T(n-3)+7=O(n*2^n)
     //time Complexity O(n)=2^n
     //space complexity 2^n*n
    }
}
int main()
{
 vector<vector<string>>out=genrateParantheses(3);
 
 for(int i=0;i<out.size();i++)
 {
     cout<<" "<<endl;
     for(int j=0;j<out[i].size();j++)
     {
        cout<<out[i][j]<<endl;
     }
 }
}
