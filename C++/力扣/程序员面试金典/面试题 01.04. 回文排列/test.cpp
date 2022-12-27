﻿/*
给定一个字符串，编写一个函数判定其是否为某个回文串的排列之一。

回文串是指正反两个方向都一样的单词或短语。排列是指字母的重新排列。

回文串不一定是字典当中的单词。

 

示例1：

输入："tactcoa"
输出：true（排列有"tacocat"、"atcocta"，等等）

*/

// 开个哈希数组
// 统计数组中字符出现的次数
// 对于所有字符，出现奇数次的字符只能有一个或没有
// 遍历筛选一下

class Solution {
public:
    bool canPermutePalindrome(string s) {
        int hash[128] = { 0 };

        for (char ch : s) {
            hash[ch]++;
        }

        int odd = 0;
        for (auto x : hash) {
            if (x & 1) {
                odd++;
            }
        }
        return odd <= 1;
    }
};

// 题解：https://leetcode.cn/problems/palindrome-permutation-lcci/solution/ha-xi-shu-zu-by-unruffled-pikeizw-tb88/