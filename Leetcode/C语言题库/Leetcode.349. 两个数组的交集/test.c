#define _CRT_SECURE_NO_WARNINGS 1 
/*
给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。

示例 1：

输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2]
示例 2：

输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出：[9,4]
解释：[4,9] 也是可通过的
*/

int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    qsort(nums1, nums1Size, sizeof(nums1[0]), cmp_int);
    qsort(nums2, nums2Size, sizeof(nums2[0]), cmp_int);
    *returnSize = 0;
    int index1 = 0; int index2 = 0;
    static int ans[20000] = { 0 };
    while (index1 < nums1Size && index2 < nums2Size)
    {
        if (nums1[index1] == nums2[index2])
        {
            if (!(*returnSize) || nums1[index1] != ans[(*returnSize) - 1])
            {
                ans[(*returnSize)++] = nums1[index1];
            }
            index1++;
            index2++;
        }
        else if (nums1[index1] < nums2[index2])
        {
            index1++;
        }
        else
        {
            index2++;
        }
    }
    return ans;
}