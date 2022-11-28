#define _CRT_SECURE_NO_WARNINGS 1 

/*
找出数组中重复的数字。


在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，
但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

示例 1：

输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3
 

限制：

2 <= n <= 100000

*/

#include <stdio.h>
#include <stdlib.h>

// 哈希表

//int findRepeatNumber(int* nums, int numsSize)
//{
//    int* hash = (int*)malloc(sizeof(int) * 100010);
//    memset(hash, 0, sizeof(int) * 100010);
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        hash[nums[i]]++;
//    }
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (hash[nums[i]] > 1)
//            return nums[i];
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 2, 3, 1, 0, 2, 5, 3 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    printf("%d\n", findRepeatNumber(arr, sz));
//
//    return 0;
//}

void Swap(int* p1, int* p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void quick_sort(int* nums, int l, int r)
{
    if (l >= r) return;
    int x = nums[l + r >> 1], i = l - 1, j = r + 1;
    while (i < j)
    {
        do i++; while (nums[i] < x);
        do j--; while (nums[j] > x);
        if (i < j) Swap(&nums[i], &nums[j]);
    }
    quick_sort(nums, l, j);
    quick_sort(nums, j + 1, r);
}

int findRepeatNumber(int* nums, int numsSize)
{
    quick_sort(nums, 0, numsSize - 1);

    // 有序，二分查找边界点
    for (int i = 0; i < numsSize; i++)
    {
        int bnum = nums[i], l = 0, r = numsSize - 1;
        // 找左分界点
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] >= bnum) r = mid;
            else l = mid + 1;
        }
        // 找右分界点
        int L = l;
        l = 0, r = numsSize - 1;
        while (l < r)
        {
            int mid = l + r + 1 >> 1;
            if (nums[mid] <= bnum) l = mid;
            else r = mid - 1;
        }
        int R = r;
        // 如果有重复数，那么 L 一定不等于 R
        if (L != R) return bnum;
    }
    return 0;
}