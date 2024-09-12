
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    // add two number, have a carry
    struct ListNode* head = malloc(sizeof(struct ListNode));
    head->val = 0;
    struct ListNode* cur = head;
    int carry = 0;

    while(l1 != NULL || l2 != NULL || carry != 0){

        int val1 = (l1 == NULL ? 0 : l1->val);
        int val2 = (l2 == NULL ? 0 : l2->val);

        int sum = val1 + val2 + carry;
        int rem = sum % 10;
        carry = sum/10;

        struct ListNode* tmp = malloc(sizeof(struct ListNode));
        tmp->val = rem;
        cur->next = tmp;
        cur = cur->next;

        l1= (l1 != NULL) ? l1->next : NULL;
        l2= (l2 != NULL) ? l2->next : NULL;
    }

    cur->next = NULL;
    struct ListNode* ans = head->next;
    free(head);
    return ans;
}
