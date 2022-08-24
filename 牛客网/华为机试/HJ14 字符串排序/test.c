#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
给定 n 个字符串，请对 n 个字符串按照字典序排列。

数据范围： 1 \le n \le 1000 \1≤n≤1000  ，字符串长度满足 1 \le len \le 100 \1≤len≤100
输入描述：
输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
输出描述：
数据输出n行，输出结果为按照字典序排列的字符串。
示例1
输入：
9
cap
to
cat
card
two
too
up
boat
boot
输出：
boat
boot
cap
card
cat
to
too
two
up
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void* e1, const void* e2)
{
    return strcmp((char*)e1, (char*)e2);
}
int main()
{
    int n = 0, k = 0;
    scanf("%d", &n);
    char arr[n][101];
    while (~scanf("%s", arr[k++]));//读取字符串到字符数组中
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}