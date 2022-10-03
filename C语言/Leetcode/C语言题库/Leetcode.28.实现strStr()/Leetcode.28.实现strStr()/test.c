#define _CRT_SECURE_NO_WARNINGS 1 

/*实现 strStr() 函数。
给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串出现的第一个位置（下标从 0 开始）。如果不存在，则返回  -1 。
说明：
当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。
对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与 C 语言的 strstr() 以及 Java 的 indexOf() 定义相符。
*/

/*输入：haystack = "hello", needle = "ll"
输出：2
：
输入：haystack = "aaaaa", needle = "bba"
输出：-1
*/

//暴力解法

/*
int strStr(char* haystack, char* needle)
{
	int dest = 0;//needle字符串开始下标
	int a = 0;
	if (!strlen(needle))//空字符串
		return 0;
	for (int i = 0; i < strlen(haystack); i++)
	{
		a = 0;
		if (haystack[i] == needle[a])//haystack元素等于needle起始的第一个元素
		{
			dest = i;//记录haystack当前下标，作为needle返回的下标
			if (i + strlen(needle) > strlen(haystack))
				return -1;
			for (int j = i; j < i + strlen(needle); j++)//从该下标开始遍历，保证遍历needle次
			{
				if (haystack[j] == needle[a])
				{
					a++;//a开始自增
					if (a == strlen(needle))
						return dest;//如果a的大小和needle的长度相等，则返回dest下标，因为我是从i下标开始记录的
				}
				else
				{
					break;//注意这里是break，千万不能退出了
					//举个例子：ississip		issip
					//我iss都遍历完了，发现相等，但是之后的i不相等，我就return -1了，但是issip字符串在后面
					//原本是要退出循环重新遍历的，结果直接返回了，这就错了
				}
			}
		}
	}
	return -1;
}
*/

//KMP算法
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void GetNext(int* next, const char* needle)
{
    assert(next && needle);
    int lenNee = strlen(needle);
    next[0] = -1;
    if (lenNee == 1)//如果子串长度为1，直接返回，不可返回空，至少要返回0下标的值
    {
        return;
    }
    next[1] = 0;
    int i = 2;//记录当前next数组下标
    int k = 0;//记录前一项next数组的值

    while (i < lenNee)
    {
        if (k == -1 || needle[i - 1] == needle[k])
        {
            next[i] = k + 1;
            i++;
            k++;
        }
        else
        {
            k = next[k];//回退到对应位置
        }
    }
    //next数组优化
    for (i = 2; i < lenNee; i++)
    {
        if (needle[i] == needle[next[i]])
        {
            next[i] = next[next[i]];
        }
    }
}
int strStr(char* haystack, char* needle)
{
    assert(haystack && needle);
    if (haystack == NULL || needle == NULL) return -1;
    int lenHay = strlen(haystack), lenNee = strlen(needle);
    if (lenHay < lenNee) return -1;

    int i = 0;//记录主串的下标
    int j = 0;//记录子串的下标

    int* next = malloc(lenNee * sizeof(int));//创建next数组
    assert(next);

    GetNext(next, needle);
    while (i < lenHay && j < lenNee)
    {
        if (j == -1 || haystack[i] == needle[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];//跳转到next数组对应下标
        }
    }

    if (j == lenNee) return i - j;
    else return -1;
}