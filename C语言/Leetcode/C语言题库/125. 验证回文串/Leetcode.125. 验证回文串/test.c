#define _CRT_SECURE_NO_WARNINGS 1 
//给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
//
//说明：本题中，我们将空字符串定义为有效的回文串。

/*
输入: "A man, a plan, a canal: Panama"
输出: true
解释："amanaplanacanalpanama" 是回文串
*/

/*
输入: "race a car"
输出: false
解释："raceacar" 不是回文串
*/

//除了字母和数字，其他都不录入字符串中
//忽略字母大小写也就是说需要进行转换

#include<stdbool.h>
bool isPalindrome(char* s) {
    int i = 0;
    int j = 0;
    while (s[i])//遍历数组
    {
        if (isalpha(s[i]) || isdigit(s[i]))//为字母和数字
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;//转化成小写
                s[j++] = s[i];
            }
            else
            {
                s[j++] = s[i];
            }
        }
        i++;
    }
    int left = 0;
    int right = j - 1;//此时数组最后下标为j-1
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}