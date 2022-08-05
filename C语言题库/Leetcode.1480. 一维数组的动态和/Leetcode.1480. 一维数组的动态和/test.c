#define _CRT_SECURE_NO_WARNINGS 1 

//给你一个数组 nums 。数组「动态和」的计算公式为：runningSum[i] = sum(nums[0]…nums[i]) 。
//
//请返回 nums 的动态和。

//输入：nums = [1, 2, 3, 4]
//输出：[1, 3, 6, 10]
//解释：动态和计算过程为[1, 1 + 2, 1 + 2 + 3, 1 + 2 + 3 + 4] 。
//
//输入：nums = [1, 1, 1, 1, 1]
//输出：[1, 2, 3, 4, 5]
//解释：动态和计算过程为[1, 1 + 1, 1 + 1 + 1, 1 + 1 + 1 + 1, 1 + 1 + 1 + 1 + 1] 。


//在原数组内修改
//修改过后的内容都在原数组nums中
//动态和计算只需要将元素 + 上一个被修改的元素即可

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for (int i = 1; i < numsSize; i++)
    {
        nums[i] += nums[i - 1];
    }
    return nums;
}
