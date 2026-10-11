int lengthOfLastWord(char* s) 
{
    int len=strlen(s);
    int c=0;
    for(int i=len-1; i >= 0; i--)
    {
        if(s[i]==32 && c!=0)
            break;
        if(s[i] !=32)
            c++;
    }
    return c;
}