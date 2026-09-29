int singleNumber(int* nums, int numsSize) {

    for(int i = 0; i < numsSize; i++) {

        int count = 0;

        for(int j = 0; j < numsSize; j++) {

            if(i != j && nums[i] == nums[j]) {
                count++;
                break;
            }
        }

        if(count == 0)
            return nums[i];
    }

    return -1;
}