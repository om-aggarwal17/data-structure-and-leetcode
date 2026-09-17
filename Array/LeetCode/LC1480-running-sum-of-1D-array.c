int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* runningSum = malloc(numsSize * sizeof(int));
    int sum = 0;

    for(int i=0 ; i<numsSize ; i++){
        sum = sum + nums[i];
        runningSum[i] = sum;
    }

    *returnSize = numsSize;

    return runningSum;
}