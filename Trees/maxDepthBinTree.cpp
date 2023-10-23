//shoutout to striver
#include<bits/stdc++.h>
using namespace std;

int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        return 1+ max(maxDepth(root->left), maxDepth(root->right));
    }

int main()
{
  //main logic here
  return 0;
}
