/*
实现一个算法，确定一个字符串 s 的所有字符是否全都不同。

示例 1：

输入: s = "leetcode"
输出: false
示例 2：

输入: s = "abc"
输出: true
限制：

0 <= len(s) <= 100
s[i]仅包含小写字母
如果你不使用额外的数据结构，会很加分。

*/

class Solution {
public:
    bool isUnique(string astr) {
        int cnt[26] = { 0 };
        for (char& c : astr) {
            cnt[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (cnt[i] > 1) {
                return false;
            }
        }
        return true;
    }
};