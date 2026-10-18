char* multiply(char* num1, char* num2)
{
    int n1 = strlen(num1);
    int n2 = strlen(num2);

    int *res = calloc(n1 + n2, sizeof(int));

    for (int i = n1 - 1; i >= 0; i--)
    {
        for (int j = n2 - 1; j >= 0; j--)
        {
            int a = num1[i] - '0';
            int b = num2[j] - '0';

            int n = a * b + res[i + j + 1];

            res[i + j + 1] = n % 10;
            res[i + j] += n / 10;
        }
    }

    char *s = malloc(n1 + n2 + 1);
    int i = 0, j = 0;

    while (i < n1 + n2 - 1 && res[i] == 0)
        i++;

    while (i < n1 + n2)
        s[j++] = res[i++] + '0';

    s[j] = '\0';

    free(res);

    return s;
}

/*char* multiply(char* num1, char* num2) {
    int n1 = 0, n2 = 0;
    for (int i = 0; i < strlen(num1) || i < strlen(num2); i++)
    {
        if (i < strlen(num1))
            n1 = n1 * 10 + (num1[i] - '0');
        if (i < strlen(num2))
            n2 = n2 * 10 + (num2[i] - '0');
    }
    int n = n1 * n2;
    char *s = malloc(20000);
    int i = 0;
    while (n > 0)
    {
        s[i] = n % 10 + '0';
        n = n / 10;
        i++;
    }
    s[i] = '\0';
    for (int j = 0; j < i / 2; j++)
    {
        char temp = s[j];
        s[j] = s[i - j - 1];
        s[i - j - 1] = temp;
    }
    return s;
}*/