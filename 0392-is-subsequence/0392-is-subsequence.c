bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0;
    while (t[i] != '\0') {
        if (s[j] == t[i])
            j++;
        i++;
    }
    if (j == strlen(s))
        return true;
    return false;
}