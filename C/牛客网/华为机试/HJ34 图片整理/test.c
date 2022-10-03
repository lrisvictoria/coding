#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。请大家给Lily帮忙，通过代码解决。
//Lily使用的图片使用字符"A"到"Z"、"a"到"z"、"0"到"9"表示。
//
//数据范围：每组输入的字符串长度满足 1 \le n \le 1000 \1≤n≤1000
//
//输入描述：
//一行，一个字符串，字符串中的每个字符表示一张Lily使用的图片。
//
//输出描述：
//Lily的所有图片按照从小到大的顺序输出
//
//示例1
//输入：
//Ihave1nose2hands10fingers
//输出：
//0112Iaadeeefghhinnnorsssv

//说起来也真是巧，昨天刚学了快排，今天就遇到字符排序了
//非常简单，一个快排搞定，我就不画图了，哈哈哈

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(char*)e1 - *(char*)e2;
}
int main()
{
    char arr[1001] = { 0 };
    scanf("%s", arr);
    int len = strlen(arr);
    qsort(arr, len, sizeof(arr[0]), cmp);
    printf("%s", arr);
    return 0;
}