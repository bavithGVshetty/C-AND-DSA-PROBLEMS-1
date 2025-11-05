#include <stdio.h>
#include <stdlib.h>

int *productExceptSelf(int *nums, int numSize, int *returnSize)
{
    *returnSize = numSize;

    int *answer = (int *)malloc(numSize * sizeof(int));

    answer[0] = 1;
    // Prefix
    for (int i = 1; i < numSize; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    // Suffix

    int suffix = 1;
    for (int i = numSize - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    return answer;
}

int main()
{
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int *result = productExceptSelf(nums, size, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}