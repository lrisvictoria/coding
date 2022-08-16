#define _CRT_SECURE_NO_WARNINGS 1 
/*
给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积 。

题目数据 保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内。

请不要使用除法，且在 O(n) 时间复杂度内完成此题。

示例 1:

输入: nums = [1,2,3,4]
输出: [24,12,8,6]
示例 2:

输入: nums = [-1,1,0,-3,3]
输出: [0,0,9,0,0]
*/

int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int leftPro[numsSize];//左乘积
    int rightPro[numsSize];//右乘积
    leftPro[0] = 1;
    rightPro[numsSize - 1] = 1;
    for (int i = 1; i < numsSize; i++)
    {
        leftPro[i] = leftPro[i - 1] * nums[i - 1];
    }
    for (int i = numsSize - 2; i >= 0; i--)
    {
        rightPro[i] = rightPro[i + 1] * nums[i + 1];
    }
    static int ans[100000] = { 0 };
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ans[(*returnSize)++] = leftPro[i] * rightPro[i];
    }
    return ans;
}