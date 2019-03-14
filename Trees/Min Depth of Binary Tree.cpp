/**
 * Definition for binary tree
 * Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

 NOTE : The path has to end on a leaf node. 
Example :

         1
        /
       2
min depth = 2.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int height(TreeNode* A){
     if(!A->left && !A->right) return 1;
     if(!A->left) return height(A->right) + 1;
     if(!A->right) return height(A->left) +1;
     
     return 1 + min(height(A->left),height(A->right));
     
 }
int Solution::minDepth(TreeNode* A) {
    if(!A) return 0;
    return height(A);
}
