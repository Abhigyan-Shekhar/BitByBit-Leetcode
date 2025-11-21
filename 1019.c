/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    int n = 0;
    struct ListNode* cur = head;
    while (cur) {
        n++;
        cur = cur->next;
    }

    int* A = malloc(n * sizeof(int));
    int* ans = calloc(n, sizeof(int));
    int* st = malloc(n * sizeof(int));
    int top = -1;

    cur = head;
    for (int i = 0; i < n; i++) {
        A[i] = cur->val;
        cur = cur->next;
    }

    for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && st[top] <= A[i]) top--;
        ans[i] = (top == -1 ? 0 : st[top]);
        st[++top] = A[i];
    }

    free(A);
    free(st);
    *returnSize = n;
    return ans;
}
