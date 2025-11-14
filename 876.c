/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int count = 0;
    struct ListNode* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int mid = count / 2;
    temp = head;

    while (mid--) {
        temp = temp->next;
    }

    return temp;
}
