/**
 * Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A->next ==NULL) return A;
    
    ListNode* st = A;
    ListNode* move = st;
    ListNode* ans = move;
    while(1){
        int v = st->val;
        while(st->next!=NULL && v == st->next->val )  st = st->next;
        if(st->next == NULL){
            move ->next = NULL;
            return ans;
        }
        else{
            move->next = st->next;
            st = st->next;
            move = move->next;
        }
    }
}
