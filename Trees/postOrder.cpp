#include<bits./stdc++.h>
using namespace std;

void myFunc(TreeNode* root, vector<int>& result)
    {
        if(root==NULL)
        {
            return;
        }
        myFunc(root->left, result);
        myFunc(root->right, result);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        myFunc(root,result);
        return result;
        
    }

int main()
{
  //main logic here
  return 0;
}
