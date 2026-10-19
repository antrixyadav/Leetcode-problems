
int strStr(char* haystack, char* needle) {
    int i = 0, flag = 0;
    int n = strlen(haystack);
    int len = strlen(needle);

    if (len == 0)
        return 0;

    for (i = 0; i <= n - len; i++) {
        if (needle[0] == haystack[i]) {
            int m = i;
            flag = 1;

            for (int j = 0; j < len; j++) {
                if (needle[j] != haystack[m + j]) {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
                return m;
        }
    }

    return -1;
}



/*
int strStr(char* haystack, char* needle) {
    int i=0,flag=0;
    while(i<strlen(haystack))
    {
        if(needle[0]== haystack[i])
        {
            int m=i;
            for(int j=0; j<strlen(needle); j++)
            {
                if(needle[j]== haystack[m+j])
                    flag=i;
                else{
                    flag=0;
                    break;
                }
            }
        }
        i++;
    }
    if(flag== 0)
        return -1;
    else
        return i;
    return 0;
}*/