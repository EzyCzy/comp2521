// https://leetcode.com/problems/rotate-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int getSize(struct ListNode* head){
    int pos = 0;
    while(head != NULL){
        head=head->next;
        pos++;
    }
    return pos;
} 
struct ListNode* rotateRight(struct ListNode* head, int k) {

    if(head == NULL || k == 0) return head;

    struct ListNode* cur = head;
    int sz = getSize(head);

    while(cur->next != NULL) cur = cur->next;

    cur->next = head;
    
    int rot = sz - (k % sz);
    while(rot--) cur=cur->next;

    struct ListNode* ans = cur->next;
    cur->next = NULL;

    return ans;
}
