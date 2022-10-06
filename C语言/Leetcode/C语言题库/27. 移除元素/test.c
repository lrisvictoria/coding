#define _CRT_SECURE_NO_WARNINGS 1 

/*

给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

示例 1：

输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2]
解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。
例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。
示例 2：

输入：nums = [0,1,2,2,3,0,4,2], val = 2
输出：5, nums = [0,1,4,0,3]
解释：函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。
注意这五个元素可为任意顺序。你不需要考虑数组中超出新长度后面的元素。

*/


// 27. 移除元素

// 思路1：找到所有的val，一次挪动数据覆盖删除
// 时间复杂度：O(N^2)
// 最坏的情况：数组中大部分值全部是val
// 空间复杂度：O(N)

//int removeElement(int* nums, int numsSize, int val)
//{
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val)
//        {
//            for (int j = i; j < numsSize - 1; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            numsSize--;
//            i--;
//        }
//    }
//    return numsSize;
//}

// 能否将时间复杂度优化到O(N)?

// 思路2：依次遍历nums数组，把不是val的数据放到另一个数组中
// 再把tmp数组的值拷贝回去
// 时间复杂度：O(N) 空间复杂度：O(N)

//int removeElement(int* nums, int numsSize, int val)
//{
//    if (!numsSize)
//    {
//        return 0;
//    }
//
//    int newArr[numsSize];
//    int count = 0;
//    // 存入数据
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] != val)
//        {
//            newArr[count++] = nums[i];
//        }
//    }
//    // 改数据
//    for (int i = 0; i < count; i++)
//    {
//        nums[i] = newArr[i];
//    }
//
//    return count;
//}


// 能否将空间复杂度优化到O(1)？
// 思路3：双指针
// src查找!=val的数，找到了就把数据覆盖到dest处，src++，dest++
// 找到==val的数，src++，dest不动
// 直到src >= numsSize

int removeElement(int* nums, int numsSize, int val)
{
    int dest = 0, src = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[dest] = nums[src];
            dest++;
        }
        src++;
    }
    return dest;
}