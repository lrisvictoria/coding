#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。

在「杨辉三角」中，每个数是它左上方和右上方的数的和
*/

// 通过迭代的方法

// 总执行次数(rowIndex + 1) * (rowIndex - 1)
// (rowIndex)^2 - 1
// 时间复杂度：O(N^2)
// 空间复杂度：O(N)

int* getRow(int rowIndex, int* returnSize)
{
    int* ans = (int*)malloc(sizeof(int) * (rowIndex + 1));// 开辟空间
    *returnSize = rowIndex + 1;
    for (int i = 0; i <= rowIndex; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            ans[j] = ans[j] + ans[j - 1];
        }
        ans[i] = 1;
    }
    return ans;
}

// 第一行和第二行不需要进入第二层循环，直接由ans[i]填充

// 之后的值会逐步迭代，举个例子
// 当i = 1时，数组[1, 1]
// i = 2 j = 1, j > 0
// ans[1] = ans[1] + ans[0] = 2
// ans[2] = 1

// 这样一次迭代就完成了

// i = 3 j = 2，数组[1, 2, 1]
// ans[2] = ans[2] + ans[1] = 1 + 2 = 3;
// j-- j = 1
// ans[1] = ans[1] + ans[0] = 1 + 2 = 3
// j--
// 迭代完成