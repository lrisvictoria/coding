#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//现在有一个长度为 n 的正整数序列，其中只有一种数值出现了奇数次，其他数值均出现偶数次，请你找出那个出现奇数次的数值。
//
//数据范围：1 \le n \le 2 \times 10 ^ 6 \1≤n≤2×10
//6
//
//输入描述：
//第一行：一个整数n，表示序列的长度。第二行：n个正整数ai，两个数中间以空格隔开。
//输出描述：
//一个数，即在序列中唯一出现奇数次的数值。
//示例1
//输入：
//5
//2 1 2 3 1
//输出：
//3
//示例2
//输入：
//1
//1
//输出：
//1

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        scanf("%d", &tmp);
        ans ^= tmp;
    }
    printf("%d\n", ans);
    return 0;
}