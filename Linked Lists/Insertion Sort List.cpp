/*
Sort a linked list using insertion sort.

We have explained Insertion Sort at Slide 7 of Arrays

Insertion Sort Wiki has some details on Insertion Sort as well.

Example :

Input : 1 -> 3 -> 2

Return 1 -> 2 -> 3
*/
ListNode* Solution::insertionSortList(ListNode* A) {
    if(!A) return NULL;
    if(A->next == NULL) return A;
    ListNode* curr = A;
    ListNode* sorted = NULL;
    
    while(curr!=NULL){
        ListNode* next = curr->next;
        if(sorted==NULL || sorted->val >= curr->val){
            curr->next = sorted;
            sorted = curr;
        }
        else{
            ListNode* move = sorted;
            while(move->next!=NULL && move->next->val< curr->val) move = move->next;
            curr->next = move->next;
            move->next = curr;
        }
        curr = next;
    }
    return sorted;
}
