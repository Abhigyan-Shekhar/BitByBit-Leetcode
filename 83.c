/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* temp;

    while (current != NULL && current->next != NULL) {
        if (current->val == current->next->val) {
           
            temp = current->next;              
            current->next = current->next->next;
            free(temp);                        
        } else {
            current = current->next;            
        }
    }

    return head;
    
}
