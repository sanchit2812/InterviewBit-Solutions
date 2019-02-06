/**
 * Given a binary tree, return the postorder traversal of its nodes’ values.

Example :

Given binary tree

   1
    \
     2
    /
   3
return [3,2,1].

Using recursion is not allowed.


 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *
 * */
void POST(TreeNode* root, vector<int>& v){
    if(!root) return ;
    POST(root->left,v);
    POST(root->right,v);
    v.push_back(root->val)
}
void POST(TreeNode* root, vector<int>& v){
   
   stack<TreeNode*> s;
   TreeNode* pr=NULL;
   
   do{
       while(root){
           s.push(root);
           root = root->left;
       }
       
       while(root==NULL && !s.empty()){
           root = s.top();
           if(root->right==NULL || root->right==pr){
               v.push_back(root->val);
               s.pop();
               pr = root;
               root = NULL;
           }
           else root = root->right;
           
       }
       
   }while(!s.empty());
    
}
 
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> v;
    POST(A,v);
    return v;
}
