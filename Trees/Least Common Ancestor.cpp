/**
 * 
 * Find the lowest common ancestor in an unordered binary tree given two values in the tree.

 Lowest common ancestor : the lowest common ancestor (LCA) of two nodes v and w in a tree or directed acyclic graph (DAG) is the lowest (i.e. deepest) node that has both v and w as descendants. 
Example :


        _______3______
       /              \
    ___5__          ___1__
   /      \        /      \
   6      _2_     0        8
         /   \
         7    4
For the above tree, the LCA of nodes 5 and 1 is 3.

 LCA = Lowest common ancestor 
Please note that LCA for nodes 5 and 4 is 5.

You are given 2 values. Find the lowest common ancestor of the two nodes represented by val1 and val2
No guarantee that val1 and val2 exist in the tree. If one value doesn’t exist in the tree then return -1.
There are no duplicate values.
You can use extra memory, helper functions, and can modify the node struct but, you can’t add a parent pointer.
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool find(TreeNode* A, int x){
    if(!A) return false;
    if(A->val==x) return true;
    
    if( (A->left && find(A->left,x)) || (A->right && find(A->right,x))) return true;
    return false;
}

TreeNode* LCA(TreeNode* A, int B, int C, int a, int b){
    if(!A) return NULL;
    
    if(A->val == B || A->val == C) return A;
    
    TreeNode* l = LCA(A->left,B,C,a,b);
    TreeNode* r = LCA(A->right,B,C,a,b);
    
    if(l && r) return A;
    if(l!=NULL) return l;
    else return r;
}

int Solution::lca(TreeNode* A, int B, int C) {
    int a =0,b=0;
    TreeNode* ans =  LCA(A,B,C,a,b);
    if(find(A,B)!=true || find(A,C)!=true ) return -1;
    if(ans) return ans->val;
    return -1;
}
