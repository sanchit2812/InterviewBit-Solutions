/**
 * Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.

An example is the root-to-leaf path 1->2->3 which represents the number 123.

Find the total sum of all root-to-leaf numbers % 1003.

Example :

    1
   / \
  2   3
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.

Return the sum = (12 + 13) % 1003 = 25 % 1003 = 25.
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

long long int path(TreeNode* root, long long int val){ 
    if (root==NULL)  return 0;
    val = 10*val + root->val;
    if(val>1003) val = val%1003;
    if(root->left==NULL && root->right ==NULL) return val;
    
    return (path(root->left,val)%1003 + path(root->right,val)%1003)%1003;
}

int Solution::sumNumbers(TreeNode* A) {
    long long int ans=0;
    ans = path(A,0);
    return ans%1003;
}
