#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个包含 [0, n] 中 n 个数的数组 nums ，找出 [0, n] 这个范围内没有出现在数组中的那个数。

 

示例 1：

输入：nums = [3,0,1]
输出：2
解释：n = 3，因为有 3 个数字，所以所有的数字都在范围 [0,3] 内。2 是丢失的数字，因为它没有出现在 nums 中。
示例 2：

输入：nums = [0,1]
输出：2
解释：n = 2，因为有 2 个数字，所以所有的数字都在范围 [0,2] 内。2 是丢失的数字，因为它没有出现在 nums 中。
示例 3：

输入：nums = [9,6,4,2,3,5,7,0,1]
输出：8
解释：n = 9，因为有 9 个数字，所以所有的数字都在范围 [0,9] 内。8 是丢失的数字，因为它没有出现在 nums 中。
示例 4：

输入：nums = [0]
输出：1
解释：n = 1，因为有 1 个数字，所以所有的数字都在范围 [0,1] 内。1 是丢失的数字，因为它没有出现在 nums 中。
 

提示：

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
nums 中的所有数字都 独一无二

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int missingNumber(int* nums, int numsSize)
{
    // 哈希表
    int* hash = (int*)malloc(sizeof(int) * 10001);
    memset(hash, 0, sizeof(int) * 10001);

    // 指定下标自增
    for (int i = 0; i < numsSize; i++)
    {
        hash[nums[i]]++;
    }

    for (int i = 0; i < numsSize; i++)
    {
        // 返回为0的数
        if (hash[i] == 0)
        {
            return i;
        }
    }
    // 这种情况处理的是丢失数字为最后一个数，就是数组长度
    return numsSize;
}

int main()
{
    int arr[] = { 3, 0, 1 };
    int nums = missingNumber(arr, 3);

    printf("%d\n", nums);

    return 0;
}