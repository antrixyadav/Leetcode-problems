void rotate(int* nums, int numsSize, int k) {
    if(numsSize == 0) return;
    k = k % numsSize;
    int *temp = malloc(numsSize * sizeof(int));
    memcpy(temp, nums + numsSize - k, k * sizeof(int));
    for(int i = numsSize-1; i >= k; i--)
        nums[i] = nums[i-k];
    memcpy(nums, temp, k * sizeof(int));
    free(temp);
}