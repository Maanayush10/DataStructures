//This problem was asked in Juniper interview to me.
//Given a Binary Tree, convert it into its mirror.
#include<bits/stdc++.h>
using namespace std;

void mirror(Node* node) {
        // code here
        if(node==NULL)
        {
            return;
        }
        Node* temp= node->left;
        node->left=node->right;
        node->right= temp;
        mirror(node->left);
        mirror(node->right);
    }

int main()
{
  //main logic here
  return 0;
}
