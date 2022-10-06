#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

/*
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

例如，121 是回文，而 123 不是。
*/
bool isPalindrome(int x) {
    if (x < 0)//负数不是回文
        return false;
    if (x % 10 == 0 && x / 10 == 0)//个位数是回文
        return true;
    int count = 0;
    int m = x;
    while (m)//计算位数
    {
        m /= 10;
        count++;
    }
    while (x)
    {
        if (x % 10 == 0 && x / 10 == 0)//如果处理一次后，结果为个位数，直接返回
            return true;
        int left = x / (int)pow(10, count - 1);//如1221 / 1000
        int right = x % 10;
        if (left != right)
            return false;
        x = x % (int)pow(10, count - 1) / 10;//去除第一位和最后一位
        //如1221 % 1000 = 221 221 / 10 = 22
        count -= 2;//由于去掉两位，count需要 - 2
    }
    return true;
}