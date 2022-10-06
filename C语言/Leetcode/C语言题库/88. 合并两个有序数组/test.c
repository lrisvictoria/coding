#define _CRT_SECURE_NO_WARNINGS 1 

/*
* 
给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，
分别表示 nums1 和 nums2 中的元素数目。

请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。

注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。
为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，
后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

 

示例 1：

输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
输出：[1,2,2,3,5,6]
解释：需要合并 [1,2,3] 和 [2,5,6] 。
合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
示例 2：

输入：nums1 = [1], m = 1, nums2 = [], n = 0
输出：[1]
解释：需要合并 [1] 和 [] 。
合并结果是 [1] 。
示例 3：

输入：nums1 = [0], m = 0, nums2 = [1], n = 1
输出：[1]
解释：需要合并的数组是 [] 和 [1] 。
合并结果是 [1] 。
注意，因为 m = 0 ，所以 nums1 中没有元素。nums1 中仅存的 0 仅仅是为了确保合并结果可以顺利存放到 nums1 中。

*/

// 思路1：创建一个新数组，遍历两个数组，将元素按大小顺序放入新数组
// 没放完的元素，肯定比新数组中最大的数字大，在依次放入即可
// 时间复杂度：O(M + N) 空间复杂度：O(M + N)

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int* newArr = (int*)malloc((m + n) * sizeof(int));
//    int start1 = 0, start2 = 0;
//    int count = 0;
//    while (start1 < m && start2 < n)
//    {
//        if (nums1[start1] < nums2[start2])
//        {
//            newArr[count++] = nums1[start1++];
//        }
//        else
//        {
//            newArr[count++] = nums2[start2++];
//        }
//    }
//    if (start1 == m)
//    {
//        for (; start2 < n; start2++)
//        {
//            newArr[count++] = nums2[start2];
//        }
//    }
//    else
//    {
//        for (; start1 < m; start1++)
//        {
//            newArr[count++] = nums1[start1];
//        }
//    }
//    for (int i = 0; i < count; i++)
//    {
//        nums1[i] = newArr[i];
//    }

// 思路2：给定end1和end2下标，分别对应nums1有效数据最后一位和nums2最后一位
// 再给定一个end下标
// 将比较end1和end2对应元素，将大的从后往前重新放入nums1数组
// 注意遍历完成数组未放置完毕的情况
// 时间复杂度：O(M + N) 空间复杂度：O(1)
// 最坏情况：end1放置完毕，end2一个没放，当前总执行次数：M + N

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int end1 = m - 1, end2 = n - 1;
    int end = m + n - 1;
    while (end1 >= 0 && end2 >= 0)
    {
        if (nums1[end1] > nums2[end2])
        {
            nums1[end--] = nums1[end1--];
        }
        else
        {
            nums1[end--] = nums2[end2--];
        }
    }
    while (end2 >= 0)
    {
        nums1[end--] = nums2[end2--];
    }
}