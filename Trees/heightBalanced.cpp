#include<bits/stdc++.h>
using namespace std;

int height(TreeNode * Node)
    {
        if(Node==NULL)
        {
            return 0;
        }
        return 1+max(height(Node->left), height(Node->right));
    } 

    bool isBalanced(TreeNode* root) {
        if(root==NULL){return true;}
        int lh= height(root->left);
        int rh= height(root->right);
        if(abs(lh-rh)>1){return false;}
        bool left= isBalanced(root->left);
        bool right= isBalanced(root->right);
        if(!right|| !left){return false;}
        return true;
    }
int main()
{
  //main logic here
  return 0;
}
