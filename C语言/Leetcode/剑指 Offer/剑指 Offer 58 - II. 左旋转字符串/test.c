﻿#define _CRT_SECURE_NO_WARNINGS 1 

/*
* 字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。
请定义一个函数实现字符串左旋转操作的功能。
比如，输入字符串"abcdefg"和数字2，
该函数将返回左旋转两位得到的结果"cdefgab"。

示例 1：

输入: s = "abcdefg", k = 2
输出: "cdefgab"
示例 2：

输入: s = "lrloseumgh", k = 6
输出: "umghlrlose"

*/

// 思路：三步翻转法

/*
* s 需要左旋的字符串
* n 左旋的次数
*/

// 三步翻转法
// 时间复杂度：O(N) 空间复杂度：O(1)

// 逆序
void reverse(char* str, int left, int right)
{
    while (left < right)
    {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}

char* reverseLeftWords(char* s, int n)
{
    int lenStr = strlen(s);
    if (n >= lenStr)
        n %= lenStr;
    reverse(s, 0, n - 1);
    reverse(s, n, lenStr - 1);
    reverse(s, 0, lenStr - 1);

    return s;
}