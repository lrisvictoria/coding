#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个整数数组 nums 。数组中唯一元素是那些只出现 恰好一次 的元素。

请你返回 nums 中唯一元素的 和 。

示例 1：

输入：nums = [1,2,3,2]
输出：4
解释：唯一元素为 [1,3] ，和为 4 。
示例 2：

输入：nums = [1,1,1,1,1]
输出：0
解释：没有唯一元素，和为 0 。
示例 3 ：

输入：nums = [1,2,3,4,5]
输出：15
解释：唯一元素为 [1,2,3,4,5] ，和为 15 。

*/

int sumOfUnique(int* nums, int numsSize)
{
    int hash[101];
    int sum = 0;
    memset(hash, 0, sizeof(hash));
    for (int i = 0; i < numsSize; i++)
    {
        // 在元素对应在哈希表的下标处的元素自增
        hash[nums[i]]++;
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (hash[nums[i]] == 1)
        {
            sum += nums[i];
        }
    }
    return sum;
}