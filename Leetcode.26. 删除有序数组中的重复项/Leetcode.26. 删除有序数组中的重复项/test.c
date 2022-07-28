﻿#define _CRT_SECURE_NO_WARNINGS 1 
//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。
//
//由于在某些语言中不能改变数组的长度，所以必须将结果放在数组nums的第一部分。更规范地说，如果在删除重复项之后有 k 个元素，那么 nums 的前 k 个元素应该保存最终结果。
//
//将最终结果插入 nums 的前 k 个位置后返回 k 。
//
//不要使用额外的空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

//输入：nums = [1, 1, 2]
//输出：2, nums = [1, 2, _]
//解释：函数应该返回新的长度 2 ，并且原数组 nums 的前两个元素被修改为 1, 2 。不需要考虑数组中超出新长度后面的元素。

int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        int j = 0;
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                int k = 0;
                for (k = j; k < numsSize - 1; k++)
                {
                    nums[k] = nums[k + 1];
                }
                j--;
                numsSize--;
            }
        }
    }
    return numsSize;
}