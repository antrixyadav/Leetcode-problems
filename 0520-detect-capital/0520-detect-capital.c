bool detectCapitalUse(char* word) {
    int i=0,count=0;
    while(word[i] != '\0')
    {
        if(word[i]>=65 && word[i]<=90)
            count++;
        i++;
    }
    if(count==i || count==0 || (count==1 && isupper(word[0])))
        return true;
    else
        return false;
    return false;
}