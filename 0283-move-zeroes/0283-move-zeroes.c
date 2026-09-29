void moveZeroes(int* nums, int numsSize) {
    int i=0,a=0;
    while(i<numsSize)
    {
        if(nums[i]==0)
        {
            i++;
            continue;
        }
        nums[a]=nums[i];
        a++;
        i++;
    }
    while(a<numsSize){
        nums[a]=0;
        a++;
    }
}