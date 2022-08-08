﻿#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//•输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；
//
//•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
//输入描述：
//连续输入字符串(每个字符串长度小于等于100)
//
//输出描述：
//依次输出所有分割后的长度为8的新字符串
//
//示例1
//输入：
//abc
//输出：
//abc00000


#include<stdio.h>
#include<string.h>
int main()
{
    char arr[105] = { 0 };
    while (~scanf("%s", arr))
    {
        char* cur = arr;
        //完整打印的次数 - 1，当正好长度为8时，直接进行下面的循环，避免出现多打印一组0的情况，
        //因为下面的循环必定执行，在平常并不会受到影响，只约束8的倍数
        for (int i = 0; i < (strlen(arr)) / 8; i++)
        {
            for (int j = 0; j < 8; j++)//打印长度为8的子串
            {
                printf("%c", *cur);
                cur++;
            }
            printf("\n");
        }
        for (int i = 0; i < 8; i++)//打印剩余的部分/完整的一组长度为8的字符串，此时cur指向剩余部分/完整字符串的第一个字符
        {
            if (*cur != '\0')//字符串遇到\0不打印，也就是字符串终止处，其他补0
            {
                printf("%c", *cur);
                cur++;
            }
            else
            {
                printf("%c", '0');
            }
        }
        printf("\n");//多组输入，打印完需换行
    }
    return 0;
}