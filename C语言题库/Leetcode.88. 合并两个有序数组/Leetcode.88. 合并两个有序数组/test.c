#define _CRT_SECURE_NO_WARNINGS 1 
/*
给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。
为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
*/

/*输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
输出：[1,2,2,3,5,6]
解释：需要合并 [1,2,3] 和 [2,5,6] 。
合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
*/

/*输入：nums1 = [1], m = 1, nums2 = [], n = 0
输出：[1]
解释：需要合并[1] 和[] 。
合并结果是[1] 。*/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    static int arr[200];//静态数组
    int s1 = 0;
    int s2 = 0;
    int k = 0;//代表两个数组合并后的元素个数
    while (s1 < m && s2 < n)
    {
        if (nums1[s1] < nums2[s2])
        {
            arr[k++] = nums1[s1++];
        }
        else
        {
            arr[k++] = nums2[s2++];
        }
    }
    if (s1 == m)//s1元素合并完成
    {
        for (; s2 < n; s2++)
        {
            arr[k++] = nums2[s2];
        }
    }
    else//s2 == n
    {
        for (; s1 < m; s1++)
        {
            arr[k++] = nums1[s1];
        }
    }
    for (int i = 0; i < k; i++)
    {
        nums1[i] = arr[i];//转移元素至nums1
    }
}