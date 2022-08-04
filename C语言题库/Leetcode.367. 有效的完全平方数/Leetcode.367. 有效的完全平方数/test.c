#define _CRT_SECURE_NO_WARNINGS 1

//给定一个 正整数 num ，编写一个函数，如果 num 是一个完全平方数，则返回 true ，否则返回 false 。
//
//进阶：不要 使用任何内置的库函数，如  sqrt 。

/*
输入：num = 16
输出：true
*/

/*
输入：num = 14
输出：false
*/

bool isPerfectSquare(int num) {
    long long left = 0;
    long long right = 10000000;
    long long ans = 0;
    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        if (mid * mid <= num)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return (ans * ans == num);//判断结果是否为真，为真返回true，为假返回false
}