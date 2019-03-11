/**
 Add Two Numbers as Lists
Asked in:  
Amazon
Qualcomm
Microsoft
Facebook
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

    342 + 465 = 807
Make sure there are no trailing zeros in the output list
So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* root=NULL;
    int c  =0 ;
    ListNode* temp, *pre = NULL;
    
    while(A!=NULL || B!=NULL){
        int  v = (A?A->val:0) + (B?B->val:0) + c;
        c = v/10;
        v = v%10;
        temp = new ListNode(v);
        if(root==NULL) root = temp;
        else pre->next = temp;
        pre  = temp;
        
        if(A) A = A->next ;
        if(B) B = B->next;
    }
    if(c) temp->next = new ListNode(c);
    return root;
}
