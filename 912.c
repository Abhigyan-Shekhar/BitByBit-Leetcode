void merge(int* nums, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = nums[l + i];
    for (int i = 0; i < n2; i++) R[i] = nums[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        nums[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

    while (i < n1) nums[k++] = L[i++];
    while (j < n2) nums[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int* nums, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);
        merge(nums, l, m, r);
    }
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    mergeSort(nums, 0, numsSize - 1);
    *returnSize = numsSize;
    return nums;
}
