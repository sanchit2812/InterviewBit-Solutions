/**
 * Given a linked list, remove the nth node from the end of list and return its head.

For example,
Given linked list: 1->2->3->4->5, and n = 2.
After removing the second node from the end, the linked list becomes 1->2->3->5.

 Note:
If n is greater than the size of the list, remove the first node of the list.
Try doing it using constant additional space.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(!A) return NULL;
    if(A->next == NULL) return NULL;
    int l =1;
    ListNode* root = A;
    while(root->next!=NULL){
        l++;
        root = root->next;
    }
    if(B>=l ){
        ListNode* head = A->next;
        A->next = NULL;
        return head;
    }
    ListNode* head = A;
    ListNode* ans = head;
    B  = l-B;
    B--;
    while(B--){
        head = head->next;
        A = A->next;
    } 
    head->next = A->next->next;
    return ans;
}
