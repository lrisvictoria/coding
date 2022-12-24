/*
描述
在一个长为 字符串中找到第一个只出现一次的字符,并返回它的位置, 如果没有则返回 -1（需要区分大小写）.（从0开始计数）


数据范围：0 \le n \le 100000≤n≤10000，且字符串只有字母组成。
要求：空间复杂度 O(n)O(n)，时间复杂度 O(n)O(n)
示例1
输入：
"google"
复制
返回值：
4
复制
示例2
输入：
"aa"
复制
返回值：
-1
*/

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<char, int> hash;
        for (char& c : str) {
            hash[c]++;
        }

        for (int i = 0; i < str.size(); i++) {
            if (hash[str[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};