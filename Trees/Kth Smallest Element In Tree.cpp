/**
 * Given a binary search tree, write a function to find the kth smallest element in the tree.

Example :

Input : 
  2
 / \
1   3

and k = 2

Return : 2

As 2 is the second smallest element in the tree.
 NOTE : You may assume 1 <= k <= Total number of nodes in BST 
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::kthsmallest(TreeNode* A, int B) {
    TreeNode* root = A;
    stack<TreeNode*> s;
    while(root){
        s.push(root);
        root = root->left;
    }
    
    while(!s.empty()){
        root = s.top();
        s.pop();
        B--;
        if(B==0) return root->val;
        if(root->right){
            root  = root->right;
            while(root){
                s.push(root);
                root = root->left;
            }
        }
    }
}
