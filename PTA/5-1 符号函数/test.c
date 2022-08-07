﻿#define _CRT_SECURE_NO_WARNINGS 1 
//习题5 - 1 符号函数
//分数 10
//作者 张高燕
//单位 浙大城市学院
//本题要求实现符号函数sign(x)。
//
//函数接口定义：
//int sign(int x);
//其中x是用户传入的整型参数。符号函数的定义为：若x大于0，sign(x) = 1；若x等于0，sign(x) = 0；否则，sign(x) = −1。
//
//裁判测试程序样例：
#include <stdio.h>

int sign(int x);

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

/* 你的代码将被嵌在这里 */
//输入样例：
//10
//输出样例：
//sign(10) = 1

int sign(int x)
{
    if (x > 0)
        return 1;
    else if (x < 0)
        return -1;
    else
        return 0;
}