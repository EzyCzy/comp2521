// https://leetcode.com/problems/swap-nodes-in-pairs/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void swapCall(struct ListNode* newHead){

    if(newHead->next != NULL && newHead->next->next != NULL) swapCall(newHead->next->next);
    else return;

    struct ListNode *cur = newHead;
    struct ListNode *k1 = newHead->next->next;
    struct ListNode *k2 = k1->next;

    struct ListNode *tmp = cur->next;

    cur->next = k1;
    k1->next = tmp;
    tmp->next = k2;

}

struct ListNode* swapPairs(struct ListNode* head) {

    struct ListNode *dummy = malloc(sizeof(*dummy));
    dummy->val = 0;
    dummy->next = head;

    swapCall(dummy);
    
    struct ListNode *ans = dummy->next;
    free(dummy);
    return ans;
}
