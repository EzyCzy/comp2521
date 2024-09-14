// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    if(head == NULL) return head;

    struct ListNode *cur = head;

    while(cur->next != NULL){

        if(cur->val == cur->next->val){
            struct ListNode *tmp = cur->next;
            cur->next = cur->next->next;
            free(tmp);
        } else {
            cur = cur->next;
        }
    }

    return head;
}
