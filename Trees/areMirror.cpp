//check if 2 trees are mirror of each other or not
#include<bits/stdc++.h>
using namespace std;

bool areMirror(TreeNode *root1, TreeNode *root2)
{
    // Write Your code here
    if(root1==NULL && root2==NULL){return true;}
    if(root1==NULL || root2==NULL){return false;}

    if(root1->data!=root2->data)
    {
        return false;
    }
    return areMirror(root1->left, root2->right) && areMirror(root1->right, root2->left);

}

int main()
{
  //main logic
  return 0;
}
