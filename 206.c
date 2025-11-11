/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) return NULL;

    int count = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    struct ListNode** stack = (struct ListNode**)malloc(count * sizeof(struct ListNode*));
    temp = head;
    int top = -1;
    while (temp != NULL) {
        stack[++top] = temp;
        temp = temp->next;
    }

    struct ListNode* newHead = stack[top--];
    temp = newHead;
    while (top >= 0) {
        temp->next = stack[top--];
        temp = temp->next;
    }

    temp->next = NULL;
    free(stack);
    return newHead;
}
