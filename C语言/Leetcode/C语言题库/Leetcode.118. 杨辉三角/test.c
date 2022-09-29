#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
在「杨辉三角」中，每个数是它左上方和右上方的数的和。
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

 /*
  * numRows打印行数，函数中需要创建一个数组返回数组的首地址
  * returnSize向外输出数组行数的地址
  * returnColumnSizes向外输出每一行的列数
  */
int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int** ret = (int**)malloc(sizeof(int*) * numRows);
    // ret是一个指针，指针指向一块连续的空间，空间中元素为int*
    // 类型为int*的指针指向一个整形数组，数组元素为int，为杨辉三角的米诶一行
    *returnSize = numRows;
    // returnSize为数组的行数
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);
    // returnColumnSizes是一个二级指针，存放一级指针的地址
    // *后，得到一级指针的地址，用malloc开辟一块连续的空间
    // 空间共有numRows个元素，元素为int，为每行的列数
    for (int i = 0; i < numRows; i++)
    {
        (*returnColumnSizes)[i] = i + 1;// 每个元素为当前行数 + 1
        ret[i] = (int*)malloc(sizeof(int) * (i + 1));
        // ret为二级指针，ret[i]访问到每行地址，再为每行开辟空间
        // 大小为i + 1个整形
        ret[i][0] = 1;
        ret[i][i] = 1;
        if (i >= 2)
        {
            for (int j = 1; j < i; j++)
            {
                ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
        }
    }
    return ret;
}