int removeElement(int* nums, int numsSize, int val) {
    int a=0;
    for(int i=0; i<numsSize; i++)
    {
        if(val==nums[i])
            continue;
        else{
            nums[a]=nums[i]; 
            a++;
        }
    }
    return a;
}