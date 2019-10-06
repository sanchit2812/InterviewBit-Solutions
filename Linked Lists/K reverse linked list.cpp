/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(B==1) return A;
    int cnt = 0;
    ListNode* move = A, *next = NULL, *prev = NULL, *head = A;
    while(move!=NULL && cnt<B){
        next = move->next;
        move->next = prev;
        prev = move;
        move = next;
        cnt++;
    }
    if(next!=NULL) head->next = reverseList(next, B);
    return prev;
}
