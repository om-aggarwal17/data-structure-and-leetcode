int firstMissingPositive(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {

        while (nums[i] > 0 && nums[i] <= numsSize) {

            int correct = nums[i] - 1;

            if (nums[correct] == nums[i])
                break;

            int temp = nums[i];
            nums[i] = nums[correct];
            nums[correct] = temp;
        }
    }

    for (int i = 0; i < numsSize; i++) {

        if (nums[i] != i + 1)
            return i + 1;
    }

    return numsSize + 1;
}