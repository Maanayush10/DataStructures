#include<bits/stdc++.h>
using namespace std;
 vector<int> postorderTraversal(TreeNode* root) {
          stack<TreeNode *> st1, st2;
          vector<int>postorder;
          if(root==NULL){return postorder;}
          st1.push(root);
          while(!st1.empty())
          {
              root= st1.top();
              st1.pop();
              st2.push(root);
              if(root->left !=NULL)
              {
                  st1.push(root->left);
              }
              if(root->right!=NULL)
              {
                  st1.push(root->right);
              }
          }
          while(!st2.empty())
          {
            root= st2.top();
            st2.pop();
            postorder.push_back(root->val);
          }
          return postorder;
      }
int main()
{
  //main logic here
  return 0;
}
