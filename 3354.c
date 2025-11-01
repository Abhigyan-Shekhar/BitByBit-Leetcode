bool simulate(int* nums, int n, int start, int dir) {
    int arr[105];
    for (int i = 0; i < n; i++) arr[i] = nums[i];

    int curr = start;
    while (curr >= 0 && curr < n) {
        if (arr[curr] == 0) {
            curr += dir;
        } else {
            arr[curr]--;
            dir = -dir;
            curr += dir;
        }
    }

    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            return false;
    return true;
}

int countValidSelections(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) continue;
        if (simulate(nums, numsSize, i, 1))
            count++;
        if (simulate(nums, numsSize, i, -1))
            count++;
    }

    return count;
}
