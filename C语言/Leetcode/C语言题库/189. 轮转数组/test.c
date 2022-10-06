#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个数组，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

示例 1:

输入: nums = [1,2,3,4,5,6,7], k = 3
输出: [5,6,7,1,2,3,4]
解释:
向右轮转 1 步: [7,1,2,3,4,5,6]
向右轮转 2 步: [6,7,1,2,3,4,5]
向右轮转 3 步: [5,6,7,1,2,3,4]
示例 2:

输入：nums = [-1,-100,3,99], k = 2
输出：[3,99,-1,-100]
解释:
向右轮转 1 步: [99,-1,-100,3]
向右轮转 2 步: [3,99,-1,-100]

*/

//189. 轮转数组
//思路1：暴力求解
//qosrt排序后，判断前后两个值是否为1
//void rotate(int* nums, int numsSize, int k)
//{
//    if (k >= numsSize)
//    {
//        k %= numsSize;
//    }
//    for (int i = 0; i < k; i++)
//    {
//        int tmp = nums[numsSize - 1];
//        for (int j = numsSize - 1; j >= 1; j--)
//        {
//            nums[j] = nums[j - 1];
//        }
//        nums[0] = tmp;
//    }
//}

//思路2：创建数组，以空间换时间
//void rotate(int* nums, int numsSize, int k)
//{
//    int newArr[numsSize];
//    for (int i = 0; i < numsSize; i++)
//    {
//        newArr[(i + k) % numsSize] = nums[i];
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        nums[i] = newArr[i];
//    }
//}

//思路3：三步翻转法
void Reverse(int* nums, int left, int right)
{
    while (left < right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left++;
        right--;
    }
}
void rotate(int* nums, int numsSize, int k)
{
    if (k >= numsSize)
        k %= numsSize;
    Reverse(nums, 0, numsSize - k - 1);
    Reverse(nums, numsSize - k, numsSize - 1);
    Reverse(nums, 0, numsSize - 1);
}