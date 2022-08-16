#define _CRT_SECURE_NO_WARNINGS 1
//描述
//写一个函数，求两个整数之和，要求在函数体内不得使用 + 、 - 、 * 、 / 四则运算符号。
//
//数据范围：两个数都满足 - 10 \le n \le 1000−10≤n≤1000
//进阶：空间复杂度 O(1)O(1)，时间复杂度 O(1)O(1)
//示例1
//输入：
//1, 2
//复制
//返回值：
//3
//
//示例2
//输入：
//0, 0
//返回值：
//0

int Add(int num1, int num2)
{
    while (num2 != 0)
    {
        int tmp = (num1 & num2) << 1;
        num1 = num1 ^ num2;
        num2 = tmp;
    }
    return num1;
}