char* removeDuplicates(char* s) {
    int n = strlen(s);
    char* seen = (char*)malloc((n + 1) * sizeof(char)); 
    int top = -1; 

    for (int i = 0; i < n; i++) {
        char curr = s[i];
        if (top >= 0 && seen[top] == curr) {
            
            top--;
        } else {
            
            seen[++top] = curr;
        }
    }

    seen[top + 1] = '\0'; 
    return seen;
}
