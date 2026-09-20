int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = malloc(numsSize * sizeof(int));

    int left = 1;

    for(int i = 0; i < numsSize; i++)
    {
        answer[i] = left;
        left = left * nums[i];
    }

    int right = 1;

    for(int i = numsSize - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    *returnSize = numsSize;

    return answer;
    }
