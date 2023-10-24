//DIAMETER OF BINARY TREE
#include<bits/stdc++.h>
using namespace std;

//self approach
//BAD complexity both space and time 
int height(TreeNode * root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+max(height(root->left), height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){return 0;}
        int lh= height(root->left);
        int rh= height(root->right);
        int rootDIA= lh+rh;
    // return rootDIA;
        int leftDIA= diameterOfBinaryTree(root->left);
        int rightDIA= diameterOfBinaryTree(root->right);

        return max(rootDIA, max(leftDIA, rightDIA));
    }

int main()
{
  //main logic
  return 0;
}
