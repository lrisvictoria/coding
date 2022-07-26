﻿#define _CRT_SECURE_NO_WARNINGS 1 
/*给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
*/

/*
为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:

// nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
int len = removeElement(nums, val);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
*/

/*输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2]
解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。
*/

//plan1：对不等于数组元素的计入j中，以j为数组大小打印数组，不等于删除数则计入j数组中
//int removeElement(int* nums, int numsSize, int val) {
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (*(nums + i) != val)
//        {
//            *(nums + j) = *(nums + i);
//            j++;
//        }
//    }
//    return j;
//}
//plan2：覆盖思想，找到删除数，将数组往前覆盖，注意覆盖后，需要重新对覆盖到被覆盖位置的元素进行判断
//int removeElement(int* nums, int numsSize, int val) {
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (*(nums + i) == val)
//        {
//            int k = 0;
//            for (k = i; k < numsSize - 1; k++)//numsSize - 1是为了防止数组越界，数组下标固定在numSize - 2
//            {
//                *(nums + k) = *(nums + k + 1);//覆盖
//            }
//            numsSize--;//数组长度减小
//            i--;//重新判断
//        }
//    }
//    return numsSize;
//}
//plan3：dest为返回长度，src为遍历数组的下标，如果数组元素不等于删除值，将其存入dest为下标的数组中
int removeElement(int* nums, int numsSize, int val) {
    int dest = 0;
    int src = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[dest++] = nums[src++];//每次记得自增
        }
        else
        {
            src++;//不满足条件则src自增
        }
    }
    return dest;
}