ListNode* Solution::detectCycle(ListNode* A) {
    ListNode* slow =A;
    ListNode* fast = A;
    while(slow && fast ){
        slow = slow->next;
        if(slow ==NULL || fast->next == NULL) return NULL;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(slow ==NULL || fast == NULL) return NULL;
    ListNode* move = slow->next;
    int k = 1;
    
    while(move!=slow){
        move = move->next;
        k++;
    }
    move = A;
    for(int i=0;i<k;i++) move = move->next;
    fast = move;
    slow = A;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
   
