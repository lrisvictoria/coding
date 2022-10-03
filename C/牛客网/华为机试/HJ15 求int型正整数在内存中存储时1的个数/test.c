#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
输入一个 int 型的正整数，计算出该 int 型数据在内存中存储时 1 的个数。

数据范围：保证在 32 位整型数字范围内
输入描述：
 输入一个整数（int类型）

输出描述：
 这个数转换成2进制后，输出1的个数

示例1
输入：
5
输出：
2
示例2
输入：
0
输出：
0
*/

#include<stdio.h>
int main()
{
    int n = 0, count = 0;
    scanf("%d", &n);
    while (n)
    {
        n &= n - 1;
        count++;
    }
    printf("%d\n", count);
    return 0;
}