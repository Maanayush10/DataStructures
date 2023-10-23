#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> result;
    if(root==NULL){return result;}

    stack<pair<TreeNode *, int>>st;
    vector<int> pre, post, ino;
    st.push({root, 1});


    while(!st.empty())
    {
        auto it= st.top();
        st.pop();

        if(it.second==1)
        {
            pre.push_back(it.first->data);
            it.second+=1;
            st.push(it);
            if(it.first->left !=NULL)
            {
                st.push({it.first->left, 1});
            }
        }
        else if(it.second==2)
        {
            ino.push_back(it.first->data);
            it.second+=1;
            st.push(it);
            if(it.first->right !=NULL)
            {
                st.push({it.first->right, 1});
            }
        }
        else
        {
            post.push_back(it.first->data);
        }

    }
    result.push_back(ino);
    result.push_back(pre);
    result.push_back(post);
    return result;
    
}


int main()
{
  //mian logic
  return 0;
}
