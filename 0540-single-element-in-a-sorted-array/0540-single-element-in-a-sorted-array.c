int singleNonDuplicate(int* nums, int numsSize) {
    int lb = 0, ub = numsSize - 1;
    while(lb < ub)
    {
        int mid = (ub + lb) / 2;
        if(mid % 2 == 1)
            mid--;
        if(nums[mid] == nums[mid + 1])
            lb = mid + 2;
        else
            ub = mid;
    }
    return nums[lb];
}