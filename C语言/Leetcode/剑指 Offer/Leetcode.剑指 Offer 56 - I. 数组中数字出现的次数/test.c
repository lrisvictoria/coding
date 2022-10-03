#define _CRT_SECURE_NO_WARNINGS 1 

/*
一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。

示例 1：

输入：nums = [4,1,4,6]
输出：[1,6] 或 [6,1]
示例 2：

输入：nums = [1,2,10,4,1,4,3,3]
输出：[2,10] 或 [10,2]

*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
    int* ans = (int*)calloc(2, sizeof(int));
    int ret = 0, pos = 0;
    // 1.将tmp和其他数字异或，ret存放的值为两个单身狗
    for (int i = 0; i < numsSize; i++)
    {
        ret ^= nums[i];
    }
    // 2.找到适合分组的二进制位，二进制位如果有1，那么就说明两个单身狗这一位不同
    // 那么就按照这一位将两组数据分组，用pos记录这一位
    for (int i = 0; i < 32; i++)
    {
        if (((ret >> i) & 1))
        {
            pos = i;
            break;
        }
    }
    // 3.进行分组，某一位为1/0的分组
    for (int i = 0; i < numsSize; i++)
    {
        if (((nums[i] >> pos) & 1) == 0)
        {
            ans[0] ^= nums[i];// 其他成对的异或为0，剩下就是一条单身狗
        }
    }
    ans[1] = ret ^ ans[0];// ret为整个异或结果，ans[0]为一组中异或结果，
                          // 在另一组分组中也有单身狗和成对的
                          // 把它们都异或起来，一条单身狗有伴了，剩下的就是另一条单身狗
    *returnSize = 2;
    return ans;
}
