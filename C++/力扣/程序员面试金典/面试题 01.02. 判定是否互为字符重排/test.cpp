/*
给定两个由小写字母组成的字符串 s1 和 s2，请编写一个程序，确定其中一个字符串的字符重新排列后，能否变成另一个字符串。

示例 1：

输入: s1 = "abc", s2 = "bca"
输出: true
示例 2：

输入: s1 = "abc", s2 = "bad"
输出: false
说明：

0 <= len(s1) <= 100
0 <= len(s2) <= 100

*/

// 排序，判断两个字符串是否相等

class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 != s2) {
            return false;
        }
        else {
            return true;
        }
    }
};