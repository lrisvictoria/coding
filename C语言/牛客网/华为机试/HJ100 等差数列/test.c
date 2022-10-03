#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//等差数列 2，5，8，11，14。。。。
//（从 2 开始的 3 为公差的等差数列）
//输出求等差数列前n项和
//
//数据范围： 1 \le n \le 1000 \1≤n≤1000
//输入描述：
//输入一个正整数n。
//
//输出描述：
//输出一个相加后的整数。
//
//示例1
//输入：
//2
//输出：
//7
//说明：
//2 + 5 = 7
//示例2
//输入：
//275
//输出：
//113575
//说明：
//2 + 5 + ... + 821 + 824 = 113575

//plan1：
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    for (int j = 2; j < 3 * n + 2; j += 3)
//    {
//        sum += j;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//plan2：
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", ((2 + (3 * n - 1)) * n) / 2);
    return 0;
}