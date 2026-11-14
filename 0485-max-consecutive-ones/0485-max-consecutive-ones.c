int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i=0,count=0,j=0,k=0,max=0;
    int *arr = malloc(numsSize * sizeof(int));
    while(i < numsSize)
    {
        if(nums[i] == 1)
            count++;
        else {
            if(count > 0) {
                arr[j]=count;
                j++;
            }
            count=0;
        }
        i++;
    }
    if(count > 0) {
        arr[j]=count;
        j++;
    }
    while(k < j)
    {
        if(max < arr[k])
            max=arr[k];
        k++;
    }
    free(arr);
    return max;
}
