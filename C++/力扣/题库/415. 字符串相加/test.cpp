/*
给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和并同样以字符串形式返回。

你不能使用任何內建的用于处理大整数的库（比如 BigInteger）， 也不能直接将输入的字符串转换为整数形式。

 

示例 1：

输入：num1 = "11", num2 = "123"
输出："134"
示例 2：

输入：num1 = "456", num2 = "77"
输出："533"
示例 3：

输入：num1 = "0", num2 = "0"
输出："0"
 

 
 
提示：

1 <= num1.length, num2.length <= 104
num1 和num2 都只包含数字 0-9
num1 和num2 都不包含任何前导零

*/

// 题解：https://leetcode.cn/problems/add-strings/solution/gao-jing-du-jia-fa-by-unruffled-pikeizw-qdnz/

class Solution {
public:
    string addStrings(string num1, string num2) {
        vector<int> a, b, c;
        for (int i = num1.size() - 1; i >= 0; i--) {
            a.push_back(num1[i] - '0');
        }
        for (int i = num2.size() - 1; i >= 0; i--) {
            b.push_back(num2[i] - '0');
        }
        int t = 0;
        for (int i = 0; i < a.size() || i < b.size(); i++) {
            if (i < a.size()) {
                t += a[i];
            }
            if (i < b.size()) {
                t += b[i];
            }
            c.push_back(t % 10);
            t /= 10;
        }
        if (t) {
            c.push_back(1);
        }
        string res;
        for (int i = c.size() - 1; i >= 0; i--) {
            res.push_back(c[i] + '0');
        }
        return res;
    }
};