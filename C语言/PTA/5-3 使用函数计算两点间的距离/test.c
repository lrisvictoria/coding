#define _CRT_SECURE_NO_WARNINGS 1 

//习题5 - 3 使用函数计算两点间的距离
//分数 10
//作者 C课程组
//单位 浙江大学
//本题要求实现一个函数，对给定平面任意两点坐标(x1, y1)和(x2, y2)，求这两点之间的距离。
//
//函数接口定义：
//double dist(double x1, double y1, double x2, double y2);
//其中用户传入的参数为平面上两个点的坐标(x1, y1)和(x2, y2)，函数dist应返回两点间的距离。
//
//裁判测试程序样例：
#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

/* 你的代码将被嵌在这里 */
//输入样例：
//10 10 200 100
//输出样例：
//dist = 210.24

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));//代码其实很简单，但是主要看思路
}