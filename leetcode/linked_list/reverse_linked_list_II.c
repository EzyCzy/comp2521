// https://leetcode.com/problems/reverse-linked-list-ii/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {

  // If empty list or no reverse needed
  if (head == NULL || left == right) return head;

  // creating dummy node to avoid edge cases
  struct ListNode *dummy = malloc(sizeof(*dummy));
  dummy->next = head;

  struct ListNode *prev = dummy;

  //traverse so current is at the left node
  for(int i = 0; i < left - 1; i++){
    prev = prev->next;
  }

  struct ListNode *cur = prev->next;
  struct ListNode *follow = NULL;

  //traverse so follow is at the right node
  for(int i = 0; i < right - left + 1; i++){
    struct ListNode *tmp = cur->next;
    cur->next = follow;
    follow = cur;
    cur = tmp;
  }

  //connect the nodes
  prev->next->next = cur;
  prev->next = follow;

  return dummy->next;
}
