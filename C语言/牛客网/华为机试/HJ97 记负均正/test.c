#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值，结果保留一位小数。
//0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。
//
//数据范围： 1 \le n\ \le 2000 \1≤n ≤2000  ，输入的整数都满足 | val | \le 1000 \∣val∣≤1000
//输入描述：
//首先输入一个正整数n，
//然后输入n个整数。
//
//输出描述：
//输出负数的个数，和所有正整数的平均值。
//
//示例1
//输入：
//11
//1 2 3 4 5 6 7 8 9 0 - 1
//输出：
//1 5.0
//示例2
//输入：
//3
//0 0 0
//输出：
//0 0.0
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[2000] = { 0 };
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    double sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
            count2++;
        if (arr[i] > 0)
        {
            count1++;
            sum += arr[i];
        }
    }
    double average = (sum * 1.0) / count1;
    if (count1 == 0)
        average = 0.0;
    printf("%d %.1lf", count2, average);
    return 0;
}