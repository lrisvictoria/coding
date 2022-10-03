#define _CRT_SECURE_NO_WARNINGS 1 
//给定一个非负整数 x ，计算并返回 x 的平方根，即实现 int sqrt(int x) 函数。
//
//正数的平方根有两个，只输出其中的正数平方根。
//
//如果平方根不是整数，输出只保留整数的部分，小数部分将被舍去。

/*
输入: x = 8
输出: 2
解释: 8 的平方根是 2.82842...，由于小数部分将被舍去，所以返回 2
*/

int mySqrt(int x) {
    long long left = 0;
    long long right = 10000000;
    long long ans = 0;
    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        if (mid * mid <= x)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return (int)ans;
}