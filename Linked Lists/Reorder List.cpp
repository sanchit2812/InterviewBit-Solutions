/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* reverse(ListNode* A){
    ListNode* prev = NULL;
    ListNode* next;
    ListNode* move = A;
    while(move){
        next = move->next;
        move->next = prev;
        prev = move;
        move = next;
    }
    return prev;
}

ListNode* Solution::reorderList(ListNode* A) {
    
    if(!A || !A->next) return A;
    ListNode* slow = A;
    ListNode* fast = A;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    ListNode* st = slow->next;
    slow->next = NULL;
    st = reverse(st);
    
    ListNode* ans = new ListNode(1);
    ListNode* move = ans;
    int x = 0;
    while(A!=NULL && st!=NULL){
        if(x==0){
            ans->next = A;
            ans = ans->next;
            A = A->next;
        }
        else{
            ans->next =  st;
            ans = ans->next;
            st = st->next;
        }
        x = 1-x;
    }
    if(x==1 && st) ans->next = st;
    else if(x==0 && A) ans->next = A;
    return move->next;
}
