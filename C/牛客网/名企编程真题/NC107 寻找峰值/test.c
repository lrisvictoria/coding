#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
给定一个长度为n的数组nums，请你找到峰值并返回其索引。数组可能包含多个峰值，在这种情况下，返回任何一个所在位置即可。
1.峰值元素是指其值严格大于左右相邻值的元素。严格大于即不能有等于
2.假设 nums[-1] = nums[n] = -\infty−∞
3.对于所有有效的 i 都有 nums[i] != nums[i + 1]
4.你可以使用O(logN)的时间复杂度实现此问题吗？

数据范围：
1 \le nums.length \le 2\times 10^5 \1≤nums.length≤2×10
5

-2^{31}<= nums[i] <= 2^{31} - 1−2
31
 <=nums[i]<=2
31
 −1

如输入[2,4,1,2,7,8,4]时，会形成两个山峰，一个是索引为1，峰值为4的山峰，另一个是索引为5，峰值为8的山峰，如下图所示：

示例1
输入：
[2,4,1,2,7,8,4]
返回值：
1
说明：
4和8都是峰值元素，返回4的索引1或者8的索引5都可以
示例2
输入：
[1,2,3,1]
返回值：
2
说明：
3 是峰值元素，返回其索引 2
*/

int findPeakElement(int* nums, int numsLen) 
{
    if (numsLen == 1 || nums[0] > nums[1])//下标0为峰值
    {
        return 0;
    }
    if (nums[numsLen - 1] > nums[numsLen - 2])//下标numsLen - 1为峰值
    {
        return numsLen - 1;
    }
    int left = 0, right = numsLen - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[mid + 1])//中间比右边大，意味着左边或者该下标肯定有个峰值
        {
            right = mid;
        }
        else//中间比右边小，意味着右边肯定有个峰值
        {
            left = mid + 1;
        }
    }
    return left;
}