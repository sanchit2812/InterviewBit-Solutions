/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(!A || !A->next) return A;
    
    ListNode *ptr1 = A, *ptr2 = A, *prev1;
    int  b  = B-1;
    C -=1;
    
    while(b--){
        prev1 = ptr1;
        ptr1 = ptr1->next;
    }
    
    while(C--) ptr2 = ptr2->next;
    ListNode* prev = ptr2->next, *next, *move = ptr1;
    ptr2->next = NULL;
    
    while(move){
        next = move->next;
        move->next = prev;
        prev = move;
        move = next;
    }
    if(B == 1) return prev;
    prev1->next = prev;
    
    return A;
}
