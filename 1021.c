char *removeOuterParentheses(char *s) {
    int len = strlen(s);
    char *res = (char *)malloc(len + 1); 
    int depth = 0;
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            if (depth > 0) {       
                res[j++] = s[i];
            }
            depth++;
        } 
        else if (s[i] == ')') {
            depth--;               
            if (depth > 0) {       
                res[j++] = s[i];
            }
        }
    }

    res[j] = '\0';
    return res;
}
