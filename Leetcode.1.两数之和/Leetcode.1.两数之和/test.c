#define _CRT_SECURE_NO_WARNINGS 1 
/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
你可以按任意顺序返回答案
*/

/*输入：nums = [2, 7, 11, 15], target = 9
输出：[0, 1]
解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。
*/

//暴力求解法：遍历传入整个数组，如果找到两数之和为target，将数组设定为这两个数，返回传入数组
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    *returnSize = 0;//数组大小设定为0
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = i + 1; j < numsSize; j++)//从i + 1向后遍历
//        {
//            if (nums[i] + nums[j] == target)
//            {
//                nums[0] = i;
//                nums[1] = j;
//                *returnSize = 2;//返回数组大小为2
//                break;
//            }
//        }
//    }
//    return nums;
//}

//创建静态数组，不使用局部变量，小心空间被释放
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2] = { 0 };//静态数组
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (target == nums[i] + nums[j])
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
            }
        }
    }
    return result;
}