bool isMiddleElementUnique(int* nums, int numsSize) {
    int num=(numsSize)/2;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[num] == nums[i] && num!=i)
            return false;
    }
    return true;
}