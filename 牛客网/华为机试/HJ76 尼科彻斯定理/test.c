#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//
//例如：
//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
//
//输入描述：
//输入一个int整数
//
//输出描述：
//输出分解后的string

//示例1
//输入：
//6
//输出：
//31 + 33 + 35 + 37 + 39 + 41

#include<stdio.h>
#include<math.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = (num - 1) * num + 1; sum != pow(num, 3); j += 2)
        {
            printf("%d", j);
            sum += j;
            if (sum != pow(num, 3))
                printf("+");
        }
    }
    return 0;
}