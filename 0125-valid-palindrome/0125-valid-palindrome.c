bool isPalindrome(char* s) {
    int i = 0, j = 0;
    int n = strlen(s);
    char *s1 = malloc(n + 1);
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s1[j++] = s[i] + 32;
        else if ((s[i] >= 'a' && s[i] <= 'z') ||
                 (s[i] >= '0' && s[i] <= '9'))
            s1[j++] = s[i];
        i++;
    }
    s1[j] = '\0';
    char *s2 = malloc(j + 1);
    for (i = 0; i < j; i++)
        s2[i] = s1[j - 1 - i];
    s2[j] = '\0';
    if (strcmp(s1, s2) == 0) 
        return true;
    else 
        return false;
}
