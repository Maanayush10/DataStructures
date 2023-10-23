#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> result;
       if(root==NULL){return result;}
       queue<TreeNode*>q;
        TreeNode * curr= root;
        q.push(curr);

        while(!q.empty())
        {
            int size= q.size();
            vector<int>temp;
            for(int i=0; i<size; i++)
            {
                curr= q.front();
                q.pop();
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            temp.push_back(curr->val);
            }
        result.push_back(temp);
        }
       return result;
    }

int main()
{
  //main logic here
  return 0;
}
