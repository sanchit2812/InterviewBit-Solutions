/**
 * 
 Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Notes:

Expected solution is linear in time and constant in space.
For example,

List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    if(A==NULL) return 1;
    if(A->next == NULL) return 1;
    
    ListNode* slow=A,*fast = A->next;
    ListNode* sec_st =NULL;
    bool odd = false;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast ->next ->next;
    }
    if(fast==NULL) odd = true;
    sec_st = slow->next;
    slow ->next = NULL;
    
    ListNode* st = A;
    
    ListNode* curr = A, *prev =NULL, *nxt;
    while(curr!=NULL){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    st = prev;
    if(odd) st = st->next;
    while(st && sec_st){
        if(st->val != sec_st->val) return 0;
        st = st->next;
        sec_st = sec_st->next;
    }
    if(st==NULL && sec_st==NULL) return 1;
    else return 0;
}
