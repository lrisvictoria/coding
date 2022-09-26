#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>

int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
    *returnSize = 2;
    int* ans = (int*)calloc(2, sizeof(int));
    int pos = 0;
    int ret = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ret ^= nums[i];
    }
    for (int i = 0; i < 32; i++)
    {
        if (((ret >> i) & 1) == 0)
        {
            pos = i;
            break;
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (((nums[i] >> pos) & 1) == 0)
        {
            ans[0] ^= nums[i];
        }
    }
    ans[1] = ret ^ (ans[0]);
    return ans;
}

int main()
{
    int nums[] = { 4,1,4,6 };
    int returnSize = 0;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int * ret = singleNumbers(nums, numsSize, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", ret[i]);
    }
    return 0;
}