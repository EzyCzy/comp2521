/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    struct ListNode* dummy = malloc(sizeof(*dummy));
    dummy->val = 0;
    dummy->next = head;

    struct ListNode* cur = head;
    struct ListNode* follow = dummy;

    for(int i = 0; i < n; i++){
        cur = cur->next;
    }

    while(cur != NULL){
        cur = cur->next;
        follow = follow->next;
    }

    struct ListNode *tmp = follow->next;
    follow->next = follow->next->next;
    free(tmp);

    return dummy->next;
    
}
