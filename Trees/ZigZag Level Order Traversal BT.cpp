/**
 * ZigZag Level Order Traversal BT
Asked in:  
Amazon
Microsoft
Given a binary tree, return the zigzag level order traversal of its nodes’ values. (ie, from left to right, then right to left for the next level and alternate between).

Example : 
Given binary tree

    3
   / \
  9  20
    /  \
   15   7
return

[
         [3],
         [20, 9],
         [15, 7]
]
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int> > v;
    stack<TreeNode*> s,t;
    if(!A) return v;
    s.push(A);
    int x=1;
    vector<int> vz;
    while(!s.empty()){
        TreeNode* root = s.top();
        s.pop();
        vz.push_back(root->val);
        if(x){
            if(root->left) t.push(root->left);
            if(root->right) t.push(root->right);
        }
        else{
            if(root->right) t.push(root->right);
            if(root->left) t.push(root->left);
        }
        if(s.empty()){
            v.push_back(vz);
            vz.clear();
            swap(s,t);
            x^=1;
        }
    }
    return v;
}
