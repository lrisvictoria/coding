#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//有一种兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子。
//例子：假设一只兔子第3个月出生，那么它第5个月开始会每个月生一只兔子。
//一月的时候有一只兔子，假如兔子都不死，问第n个月的兔子总数为多少？
//数据范围：输入满足 1 \le n \le 31 \1≤n≤31
//输入描述：
//输入一个int型整数表示第n个月
//
//输出描述：
//输出对应的兔子总数
//
//示例1
//输入：
//3
//输出：
//2

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int rabbit1 = 1;
    int rabbit2 = 1;
    int rabbit3 = rabbit1 + rabbit2;
    while (n > 2)
    {
        rabbit3 = rabbit1 + rabbit2;
        rabbit1 = rabbit2;
        rabbit2 = rabbit3;
        n--;
    }
    printf("%d", rabbit3);
    return 0;
}