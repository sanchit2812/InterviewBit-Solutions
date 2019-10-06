/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    if(!A || !A->next) return A;
    
    ListNode* l = new ListNode(1), *r= new ListNode(1);
    ListNode* ans1 = l, *ans2 = r;
    while(A){
        if(A->val <B){
            l->next = A;
            A = A->next;
            l = l->next;
        }
        else{
            r ->next = A;
            A = A->next;
            r = r->next;
        }
    }
    r ->next = NULL;
    
    if(r->next ==NULL)
    l ->next = ans2->next;
    return ans1->next;
}
