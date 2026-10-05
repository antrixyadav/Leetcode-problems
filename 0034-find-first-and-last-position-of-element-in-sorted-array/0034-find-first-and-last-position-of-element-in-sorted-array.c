
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* n = malloc(2 * sizeof(int));
    n[0] = -1;
    n[1] = -1;
    int left = 0;
    int right = numsSize - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            n[0] = mid;
            right = mid - 1;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    left = 0;
    right = numsSize - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            n[1] = mid;
            left = mid + 1;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    *returnSize = 2;
    return n;
}
