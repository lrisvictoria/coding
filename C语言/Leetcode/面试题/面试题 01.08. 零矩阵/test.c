#define _CRT_SECURE_NO_WARNINGS 1 

/*
编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。

 

示例 1：

输入：
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出：
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
示例 2：

输入：
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
输出：
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]

*/

/*
 * matrix 二维数组本身
 * matrixSize 数组的行
 * matrixColSize 传址调用，数组的列*可以访问到数组元素
 * 数组的列大约表现为数组形式，而矩阵每行每列相同
 * 所以数组的列就可以表示为*matrixColSize
 */
void setZeroes(int** matrix, int matrixSize, int* matrixColSize)
{
    int m = matrixSize;// 数组的行
    int n = matrixColSize[0]; // 数组的列

    int row[m];// 记录数组出现0的行数
    int col[n];// 记录数组出现0的列数

    // 数组元素设定为0
    memset(row, 0, sizeof(int) * m);
    memset(col, 0, sizeof(int) * n);

    // 记录出现0的行和列
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!matrix[i][j])
            {
                row[i] = col[j] = 1;
            }
        }
    }

    // 将为0的行和列的元素都改为0
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// 时间复杂度：O(M * N)
// 空间复杂度：O(M + N)