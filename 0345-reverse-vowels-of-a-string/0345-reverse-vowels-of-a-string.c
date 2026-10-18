char* reverseVowels(char* s) {
    int i=0,j=strlen(s)-1;
    char ch=' ',ch1=' ';
    while(i<j)
    {
        if((s[i] =='i' || s[i] =='I') || (s[i] =='A' || s[i] =='a') || (s[i] =='e' || s[i] =='E') || (s[i] =='O' || s[i] =='o') || (s[i] =='u' || s[i] =='U'))
            ch=s[i];
        else{
            i++;
            continue;
        }
        if((s[j] =='i' || s[j] =='I') || (s[j] =='A' || s[j] =='a') || (s[j] =='e' || s[j] =='E') || (s[j] =='O' || s[j] =='o') || (s[j] =='u' || s[j] =='U'))
            ch1=s[j];
        else{
            j--;
            continue;
        }
        s[i]=ch1;
        s[j]=ch;
        i++;
        j--;
    }
    return s;
}
