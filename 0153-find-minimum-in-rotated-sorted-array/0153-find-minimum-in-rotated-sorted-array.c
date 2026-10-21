int findMin(int* nums, int numsSize) {
    int lb = 0, ub = numsSize - 1, mid;
    while (lb < ub) {
        mid = (lb + ub) / 2;
        if (nums[mid] > nums[ub])
            lb = mid + 1;
        else
            ub = mid;
    }
    return nums[lb];
}