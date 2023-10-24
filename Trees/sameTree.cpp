//shoutout to striver
#include<bits/stdc++.h>
using namespace std;


bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL)
        {
            return p==q;
        }
        return p->val==q->val && isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
    }


int main()
{
  //Main logic here;
  return 0;
}
