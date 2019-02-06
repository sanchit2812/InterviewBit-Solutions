/*
Given a binary tree, return the preorder traversal of its nodes’ values.

Example :
Given binary tree

   1
    \
     2
    /
   3
return [1,2,3].

Using recursion is not allowed.*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void PREORDER(TreeNode* root, vector<int>& v) {
    if(!root) return ;
    v.push_back(root->val);
    PREORDER(root->left,v);
    PREORDER(root->right,v);
}


void PREORDER(TreeNode* root, vector<int>& v) {
    stack<TreeNode*> s;
    while(1){
        while(root){
            s.push(root);
            v.push_back(root->val);
            root = root->left;
        }
        if(s.empty()) return ;
        root = s.top();
        s.pop();
        root = root->right;
    }
}



vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> v;
    PREORDER(A,v);
    return v;
}
