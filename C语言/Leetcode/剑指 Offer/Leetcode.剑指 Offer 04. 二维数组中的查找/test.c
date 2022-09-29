﻿#define _CRT_SECURE_NO_WARNINGS 1 

/*
在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

示例:

现有矩阵 matrix 如下：

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。

给定 target = 20，返回 false。

*/

/*
 * 输入 **matrix 是长度为 matrixSize 的数组指针的数组，其中每个元素（也是一个数组）
 * 的长度组成 *matrixColSize 数组作为另一输入，*matrixColSize 数组的长度也为 matrixSize
 */


bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target)
{

    if ((matrix == NULL) || matrixSize == 0 || *matrixColSize == 0)
    {
        return false;
    }

    int row = 0, col = *matrixColSize - 1;
    // 杨氏矩阵
    while (row <= matrixSize - 1 && col >= 0)
    {
        if (matrix[row][col] > target)
        {
            col--;
        }
        else if (matrix[row][col] < target)
        {
            row++;
        }
        else
        {
            return true;
        }
    }
    return false;
}
