#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个 m * n 的矩阵 grid，矩阵中的元素无论是按行还是按列，都以非递增顺序排列。 
请你统计并返回 grid 中 负数 的数目。

示例 1：

输入：grid = [[4, 3, 2, -1], [3, 2, 1, -1], [1, 1, -1, -2], [-1, -1, -2, -3]]
输出：8
解释：矩阵中共有 8 个负数。
示例 2：

输入：grid = [[3, 2], [1, 0]]
输出：0
*/

int countNegatives(int** grid, int gridSize, int* gridColSize)
{
    int count = 0;
    for (int i = 0; i < gridSize; i++)
    {
        int pos = -1; // 存在负数，pos 为负数出现的下标，不存在负数，pos 防止错误累加
        int left = 0;
        int right = *gridColSize - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (grid[i][mid] < 0)
            {
                pos = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        // 说明本行有负数，则进行累加
        if (pos != -1)
        {
            count += *gridColSize - pos;
        }
    }
    return count;
}