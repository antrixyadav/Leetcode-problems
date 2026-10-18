int myAtoi(char* s) {
    long n1 = 0;
    int sign = 1, i = 0;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    for (; s[i] >= '0' && s[i] <= '9'; i++) {
        n1 = n1 * 10 + (s[i] - '0');

        if (n1 * sign > INT_MAX)
            return INT_MAX;

        if (n1 * sign < INT_MIN)
            return INT_MIN;
    }

    return n1 * sign;
}