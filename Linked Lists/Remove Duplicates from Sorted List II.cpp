/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(!A || !A->next) return A;
    ListNode* ans = new ListNode(1);
    ListNode* x = ans;
    while(A){
        int v = A->val;
        int cnt = 1;
        while(A->next && v == A->next->val){
            cnt ++;
            A = A->next;
        }
        if(cnt==1){
            ans->next = new ListNode(v);
            ans = ans->next;
            A = A->next;
        }
        else A = A->next;
    }
    ans->next = NULL;
    return x->next;
}
