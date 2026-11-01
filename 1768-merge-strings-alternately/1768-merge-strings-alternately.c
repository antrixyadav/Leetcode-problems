char * mergeAlternately(char * word1, char * word2)
{
    int l1 = strlen(word1) + strlen(word2), i = 0, j = 0, k = 0;
    char* output = malloc((l1 + 1) * sizeof(char));
    while(j < strlen(word1) || k < strlen(word2))
    {
        if(i % 2 == 0 && j < strlen(word1))
        {
            output[i] = word1[j];
            j++;
            i++;
        }
        else if(k < strlen(word2))
        {
            output[i] = word2[k];
            k++;
            i++;
        }
        else
        {
            output[i] = word1[j];
            j++;
            i++;
        }
    }
    output[i] = '\0';
    return output;
}