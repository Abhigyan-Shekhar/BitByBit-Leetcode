bool isPalindrome(int x) {
    if (x < 0) return false;

    char s[20];
    sprintf(s, "%d", x);

    int len = strlen(s);
    char stack[20];
    int top = -1;

    for (int i = 0; i < len; i++)
        stack[++top] = s[i]; 

    for (int i = 0; i < len; i++) {
        if (s[i] != stack[top--])
            return false; 
    }

    return true;
}
