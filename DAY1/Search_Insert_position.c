#include <stdio.h>

int searchInsert(int *nums, int numSize, int target)
{
    int low = 0, high = numSize - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}
int main()
{
    printf("Welcome\n");
    int nums[] = {1, 3, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    // int output=searchInsert(nums,size,5);
    printf("%d",searchInsert(nums,size,2));
    return 0;
}