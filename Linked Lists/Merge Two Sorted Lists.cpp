/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* move;
    
    if(A->val < B->val){
        move = A;
        A = A->next;
    }
    else{
        move = B;
        B = B->next;
    }
    
    ListNode* ans = move;
    
    while(A!=NULL && B!=NULL){
        if(A->val < B->val){
            move->next  = A;
            A = A->next;
            move = move->next;
        }
        else{
            move->next = B;
            B = B->next;
            move = move->next;
        }
    }
    if(A == NULL) move->next = B;
    else move->next = A;
    return ans;
}
