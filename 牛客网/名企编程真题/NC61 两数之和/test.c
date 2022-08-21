#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
给出一个整型数组 numbers 和一个目标值 target，请在数组中找出两个加起来等于目标值的数的下标，返回的下标按升序排列。
（注：返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到）

数据范围：2\leq len(numbers) \leq 10^52≤len(numbers)≤10
5
 ，-10 \leq numbers_i \leq 10^9−10≤numbers
i
​
 ≤10
9
 ，0 \leq target \leq 10^90≤target≤10
9

要求：空间复杂度 O(n)O(n)，时间复杂度 O(nlogn)O(nlogn)
示例1
输入：
[3,2,4],6
返回值：
[2,3]
说明：
因为 2+4=6 ，而 2的下标为2 ， 4的下标为3 ，又因为 下标2 < 下标3 ，所以返回[2,3]
示例2
输入：
[20,70,110,150],90
返回值：
[1,2]
说明：
20+70=90
*/

//太简单了，不写题解

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2] = { 0 };//静态数组
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > target)//若数组元素大于target直接进入下一次循环
        {
            continue;
        }
        for (int j = i + 1; j < numsSize; j++)
        {
            if (target == nums[i] + nums[j])
            {
                result[0] = i + 1;
                result[1] = j + 1;
            }
        }
    }
    return result;
}