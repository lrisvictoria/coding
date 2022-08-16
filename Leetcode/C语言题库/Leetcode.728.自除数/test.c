﻿#define _CRT_SECURE_NO_WARNINGS 1 
//自除数 是指可以被它包含的每一位数整除的数。
//
//例如，128 是一个 自除数 ，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。
//自除数 不允许包含 0 。
//
//给定两个整数 left 和 right ，返回一个列表，列表的元素是范围 [left, right] 内所有的 自除数 。
//
//
//
//示例 1：
//
//输入：left = 1, right = 22
//输出：[1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
//示例 2:
//
//输入：left = 47, right = 85
//输出：[48, 55, 66, 77]

#include<stdbool.h>
bool isDividing(int num) 
{
    int temp = num;//拷贝一份
    while (temp)
    {
        int digit = temp % 10;
        if (!digit || num % digit)//某一位为0或数字 % 某一位不为0
        {
            return false;
        }
        temp /= 10;
    }
    return true;
}
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    *returnSize = 0;
    int pos = 0;
    static int ans[10000] = { 0 };
    for (int i = left; i <= right; i++)
    {
        if (isDividing(i))
        {
            ans[pos++] = i;
        }
    }
    *returnSize = pos;
    return ans;
}