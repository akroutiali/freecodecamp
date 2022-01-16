#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


/*


time complexity = O(n)
space Complexity=O(logn)


          8
    5          5
 3     2     2    3
*/


class Node 
{
    public:
    int value;
    Node* left;
    Node* right;
    public:
    Node(int val)
    {
        value=val;
    }
};
bool isSymetricHelper(Node*node1,Node*node2)
{
    if(node1 ==nullptr && node2==nullptr)
    return true;
    if((node1 == nullptr && node2 != nullptr )|| (node1 != nullptr && node2==nullptr) || (node1->value != node2->value))
    return false;
    else
    return (isSymetricHelper(node1->left,node2->right) &&isSymetricHelper(node1->right,node2->left));
}
bool isSymetric(Node* root)
{
   if (root ==nullptr)
   return true;
   return isSymetricHelper(root->left,root->right);
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(4);
    root->right=new Node(4);
    root->left->right=new Node(6);
    root->right->left=new Node(7);
    cout<<"result ="<<isSymetric(root);
    return 0;
}
