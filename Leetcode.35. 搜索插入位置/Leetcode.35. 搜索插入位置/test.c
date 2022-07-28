#define _CRT_SECURE_NO_WARNINGS 1 

//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//请必须使用时间复杂度为 O(log n) 的算法。

//输入: nums = [1, 3, 5, 6], target = 5
//输出 : 2

//找插入下标

int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    int count = 0;//与下标一致
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] < target)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}