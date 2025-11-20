/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    int n = 1;
    struct ListNode* fast = head;
    while (fast->next) {
        fast = fast->next;
        n++;
    }

    k %= n;
    if (k == 0) return head;

    int target = n - k - 1;
    struct ListNode* slow = head;
    for (int i = 0; i < target; i++) {
        slow = slow->next;
    }

    fast->next = head;
    struct ListNode* newHead = slow->next;
    slow->next = NULL;

    return newHead;
}
