ool isHappy(int n) {
    int* seen = (int*)calloc(1000, sizeof(int));
    
    if (seen == NULL) {
        return false; 
    }

    while (n != 1) {
        int current = n;
        int sum = 0;

        while (current != 0) {
            int digit = current % 10;
            sum += digit * digit;
            current /= 10;
        }

        if (sum < 1000) {
            if (seen[sum] == 1) {
                free(seen); 
                return false;
            }
            
            seen[sum] = 1;
        }
        
        n = sum;
    }

    free(seen); 
    return true;
}
