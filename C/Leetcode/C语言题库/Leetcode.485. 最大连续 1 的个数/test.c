#define _CRT_SECURE_NO_WARNINGS 1 
/*
给定一个二进制数组 nums ， 计算其中最大连续 1 的个数。

 

示例 1：

输入：nums = [1,1,0,1,1,1]
输出：3
解释：开头的两位和最后的三位都是连续 1 ，所以最大连续 1 的个数是 3.
示例 2:

输入：nums = [1,0,1,1,0,1]
输出：2
 

提示：

1 <= nums.length <= 105
nums[i] 不是 0 就是 1.

*/

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    static int ans[100000] = { 0 };
    int count = 0;
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i])//1
        {
            count++;
        }
        else if (!nums[i])//0
        {
            ans[k++] = count;
            count = 0;//置为0
            continue;//直接进入下一次循环，节省时间
        }
        if (i == numsSize - 1)//数组结尾情况
        {
            ans[k++] = count;
        }
    }
    int max = 0;
    for (int i = 0; i < k; i++)
    {
        if (ans[i] > max)
        {
            max = ans[i];
        }
    }
    return max;
}