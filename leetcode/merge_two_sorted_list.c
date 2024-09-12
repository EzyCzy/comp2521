/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    struct ListNode* ans = malloc(sizeof(*ans));
    ans->val = 0;
    ans->next = NULL;
    struct ListNode* stay = ans;

    while(list1 != NULL || list2 != NULL){

        printf("%d %d\n", (list1 != NULL) ? list1->val : 0, (list2 != NULL) ? list2->val : 0);
        struct ListNode* tmp = malloc(sizeof(*tmp));
        tmp->next = NULL;
        if(list1 != NULL && list2 != NULL){
            if(list1->val > list2->val){
                tmp->val = list2->val;
                list2 = list2->next;
            } else {
                tmp->val = list1->val;
                list1 = list1->next;
            }
        } else if (list1 != NULL){
            tmp->val = list1->val;
            list1 = list1->next;
        } else if(list2 != NULL){
            tmp->val = list2->val;
            list2 = list2->next;
        }
        ans->next = tmp;
        ans = ans->next;
    }

    return stay->next;
}
