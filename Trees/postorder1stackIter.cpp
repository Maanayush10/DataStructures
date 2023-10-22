#include<bits/stdc++.h>
using namespace std;

//ITERATIVE APPROACH
vector<int> postorderTraversal(TreeNode* root) {
        //using one stack

        TreeNode * curr= root;
        stack<TreeNode *>st;
        TreeNode * temp;
        vector<int> postorder;

        while(curr!=NULL || !st.empty())
        {
            if(curr!=NULL)
            {
                st.push(curr);
                curr= curr->left;
            }
            else
            {
               temp = st.top()->right;
                if(temp==NULL)
                {
                    temp= st.top();
                    st.pop();
                    postorder.push_back(temp->val);
                    while(!st.empty() && temp== st.top()->right)
                    {
                        temp=st.top();
                        st.pop();
                        postorder.push_back(temp->val);
                    }
                }
                else
                {
                    curr=temp;
                }
            }
        }
        return postorder;
      }


int main()
{
  //main logic here
  return 0;
}
