/*
Given a list, rotate the list to the right by k places, where k is non-negative.

For example:

Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B){
    if(!A) return NULL;
    ListNode* move = A;
    int len =1;
    while(move->next!=NULL){
        move = move->next;
        len++;
    }
    move->next = A;
    int pre = len - B%len -1;
    ListNode* head = A;
    while(pre--){
        head = head->next;
    }
    ListNode* root = head->next;
    head->next = NULL;
    return root;
}
