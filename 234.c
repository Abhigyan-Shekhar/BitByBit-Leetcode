/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return true;

    
    int count = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    
    int* stack = (int*)malloc(sizeof(int) * count);
    if (stack == NULL) return false;
    int top = -1;

    
    temp = head;
    while (temp != NULL) {
        stack[++top] = temp->val;
        temp = temp->next;
    }

    
    temp = head;
    while (temp != NULL) {
        if (temp->val != stack[top--]) {
            free(stack);
            return false;
        }
        temp = temp->next;
    }

    
    free(stack);
    return true;
}
