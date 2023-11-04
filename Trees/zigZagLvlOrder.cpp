//Zigzag level order traversal of a binary tree
//shoutout to striver
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        bool flag= true;

        queue<TreeNode *>q;
        vector<vector<int>> result;
        if(root==NULL){return result;}

        q.push(root);
        while(!q.empty())
        {
           int size= q.size();
            vector<int> temp(size);
           for(int i=0; i<size; i++)
           {
               TreeNode * curr= q.front();
               q.pop();
               int index= flag ? i:size-i-1;//main step
               temp[index]= curr->val;
               if(curr->left)
               {
                   q.push(curr->left);
               }
               if(curr->right)
               {
                   q.push(curr->right);
               }

           }
           flag = !flag;
           result.push_back(temp);
        }
        return result;
    }

int main()
{
  //main logic here;
  return 0;
}
