#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个数组，包含从 1 到 N 所有的整数，但其中缺了两个数字。你能在 O(N) 时间内只用 O(1) 的空间找到它们吗？

以任意顺序返回这两个数字均可。

示例 1:

输入: [1]
输出: [2,3]
示例 2:

输入: [2,3]
输出: [1,4]

*/

// 样例数组：[ 2, 3]
// 消失的数字：[ 1, 4]
// 如何求出消失的两个数字？
// 异或：相同为0，不同为1
// 那么两个相同的数字异或结果为0
// 首先将数组元素和ret异或：0 ^ 2 ^ 3
// 再将1-N的数字和ret异或，最终留下的就是消失的两个数字
int* missingTwo(int* nums, int numsSize, int* returnSize)
{
    int ret = 0;
    int n = numsSize + 2;
    // 1. 求出两个数字的异或结果
    for (int i = 0; i < numsSize; i++)
    {
        ret ^= nums[i];
    }
    for (int i = 1; i <= n; i++)
    {
        ret ^= i;
    }
    // 2. 设定第l位
    int lsb = (ret == INT_MIN ? ret : (ret & (-ret)));
    int miss1 = 0, miss2 = 0;
    // 3. 将数字以l位为1/0分成两类
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] & lsb)
        {
            miss1 ^= nums[i];
        }
        else
        {
            miss2 ^= nums[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i & lsb)
        {
            miss1 ^= i;
        }
        else
        {
            miss2 ^= i;
        }
    }
    // 4. 动态开辟数组
    int* ans = (int*)malloc(2 * sizeof(int));
    ans[0] = miss1;
    ans[1] = miss2;
    *returnSize = 2;
    return ans;
}

// 1 ^ 4 两个数字不同，因此肯定有不同项 --> 001 100 --> 101 --> 5
// 5 ^ -5 取出异或结果最低位的1，设定为第i位
// 0000 0000 0000 0000 0000 0000 0000 0101
// 1000 0000 0000 0000 0000 0000 0000 0101 - 原
// 1111 1111 1111 1111 1111 1111 1111 1010 - 反
// 1111 1111 1111 1111 1111 1111 1111 1100 - 补
// 按位与，两个都为1，则为1，否则为0
// 0000 0000 0000 0000 0000 0000 0000 0100 - 4
// 
// 那么消失的两个数字中，一个第i位为0，一个第i位为1
// 这样ret的二进制表示的第i位才能为1
// 接下来把1 - n的所有整数分成两类
// 二进制某位为1/0

// 如果数字的第三位为1，则分为一组
// 否则归为另外一组
// 相同的数字会被异或为0
// 最后的结果就是消失的两个数字

// lsb = 4 --> 100
// nums[0] = 2 --> nums[0] & lsb --> 010 & 100 --> 0
// miss2 ^= 0 ^ 2
// i++
// nums[1] = 3 --> nums[1] & lsb --> 011 & 100 --> 010 --> 2
// miss1 ^= 0 ^ 3
// nums数组已经遍历完毕

// 1 - n
// 1 & lsb --> 001 & 100 --> 0
// miss2 ^= 0 ^ 2 ^ 1
// i++
// 2 & lsb --> 010 & 100 --> 0
// miss2 ^= 0 ^ 2 ^ 1 ^ 2
// i++
// 3 & lsb --> 011 & 100 --> 2
// miss1 ^= 0 ^ 3 ^ 3
// i++
// 4 & lsb --> 100 & 100 --> 4
// miss1 ^= 0 ^ 3 ^ 3 ^ 4

// miss1 = 4
// miss2 = 1

//找到消失的数字