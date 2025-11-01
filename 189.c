void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0) return;

    int stack[k];
    int top = -1;

    
    for (int i = numsSize - k; i < numsSize; i++) {
        stack[++top] = nums[i];
    }

    
    for (int i = numsSize - k - 1; i >= 0; i--) {
        nums[i + k] = nums[i];
    }

    
    for (int i = 0; i < k; i++) {
        nums[i] = stack[i];
    }
}
