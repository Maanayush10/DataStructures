#include<bits/stdc++.h>
using namespace std;

int value(TreeNode * root, int & maxiVal)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lval=max(0, value(root->left, maxiVal));
        int rval= max(0,value(root->right, maxiVal));
        maxiVal= max(maxiVal, (lval+rval+(root->val)));// this path just updates maximum
        return (root->val)+max(lval, rval);//this line decides which path u will take
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL){return 0;}
        int maxiVal=INT_MIN;
        value(root, maxiVal);
        return maxiVal;
    }

int main()
{
  //main logic
  return 0;
}
