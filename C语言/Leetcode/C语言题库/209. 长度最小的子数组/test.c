#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个含有 n 个正整数的数组和一个正整数 target 。

找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。

示例 1：

输入：target = 7, nums = [2,3,1,2,4,3]
输出：2
解释：子数组 [4,3] 是该条件下的长度最小的子数组。
示例 2：

输入：target = 4, nums = [1,4,4]
输出：1
示例 3：

输入：target = 11, nums = [1,1,1,1,1,1,1,1]
输出：0

*/

int minSubArrayLen(int target, int* nums, int numsSize)
{
    int left = 0;
    int right = 0;
    int curSum = 0;
    int minPart = 0;

    while (right < numsSize)
    {
        // 累加区间内的数据
        curSum += nums[right];
        // 如果数据和已经大于target，那么这时候说明可以滑动left
        while (curSum >= target)
        {
            // 如果区间长度小于最小值，需要更新，另外一个就是为0的时候
            if (right - left + 1 < minPart || minPart == 0)
            {
                minPart = right - left + 1;
            }
            // 减少区间的值，并滑动左窗口
            curSum -= nums[left];
            left++;
        }
        right++;
    }
    return minPart;
}