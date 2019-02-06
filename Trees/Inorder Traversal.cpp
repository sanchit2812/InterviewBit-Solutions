/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void INORDER(TreeNode* A, vector<int>& v){
     if(!A) return;
     INORDER(A->left,v);
     v.push_back(A->val);
     INORDER(A->right,v);
 }
 
 void INORDER(TreeNode* A, vector<int>& v){
    stack<TreeNode*> s;
    while(1){
        while(A){
            s.push(A);
            A = A->left;
        }
        if(s.empty()) return ;
        A = s.top();
        v.push_back(A->val);
        s.pop();
        A = A->right;
        
    }
 }

 
 
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> v;
    INORDER(A, v);
    return v;
}
