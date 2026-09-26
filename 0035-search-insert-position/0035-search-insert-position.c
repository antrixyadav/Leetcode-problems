int searchInsert(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
            return i;
        if(i < numsSize - 1 && target > nums[i] && target < nums[i + 1])
            return i+1;
        else if(target<nums[0])
            return 0;
        else if(target>nums[numsSize-1])
            return numsSize;
        else
            i=i;
    }
    return 0;
}