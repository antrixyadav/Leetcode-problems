int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) 
        return 0;
    int a = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[a]) {
            a++;
            nums[a] = nums[i];
        }
    }
    return a + 1;
}