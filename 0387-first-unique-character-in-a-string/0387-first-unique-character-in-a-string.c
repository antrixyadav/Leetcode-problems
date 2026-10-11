/*int firstUniqChar(char* s) {
    int i = 0;
    while (s[i] != '\0') {
        int j = 0, count = 0;
        while (s[j] != '\0') {
            if (s[i] == s[j])
                count++;
            j++;
        }
        if (count == 1)
            return i;
        i++;
    }
    return -1;
}*/
int firstUniqChar(char* s) {
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (count[s[i] - 'a'] == 1)
            return i;
    }
    return -1;
}
