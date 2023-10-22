#include<bits/stdc++.h>
using namespace std;
vector<int> inorderTraversal(TreeNode* root) {
        //ITERATIVE APPROACH
        stack<TreeNode *>st;
        TreeNode * node= root;
        vector<int> inorder;
        while(true)
        {
            if(node!=NULL)
            {
                st.push(node);
                node=node->left;
            }
            else
            {
                if(st.empty()){ break;}
                node= st.top();
                st.pop();
                inorder.push_back(node->val);
                node= node->right;
            }
        }
        return inorder;  
    }

int main()
{
  //main logic here
  return 0;
}
