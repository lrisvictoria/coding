/*
给你两个二进制字符串 a 和 b ，以二进制字符串的形式返回它们的和。

 

示例 1：

输入:a = "11", b = "1"
输出："100"
示例 2：

输入：a = "1010", b = "1011"
输出："10101"
 

提示：

1 <= a.length, b.length <= 104
a 和 b 仅由字符 '0' 或 '1' 组成
字符串如果不是 "0" ，就不含前导零

*/

// 题解：https://leetcode.cn/problems/add-binary/solution/gao-jing-du-jia-fa-by-unruffled-pikeizw-th0a/

class Solution {
public:
    string addBinary(string a, string b) {
        vector<int> x, y, z;

        for (int i = a.size() - 1; i >= 0; i--) {
            x.push_back(a[i] - '0');
        }
        for (int i = b.size() - 1; i >= 0; i--) {
            y.push_back(b[i] - '0');
        }

        int t = 0;
        for (int i = 0; i < x.size() || i < y.size(); i++) {
            if (i < x.size()) {
                t += x[i];
            }
            if (i < y.size()) {
                t += y[i];
            }
            z.push_back(t % 2);
            t /= 2;
        }
        if (t) {
            z.push_back(1);
        }

        string res;
        for (int i = z.size() - 1; i >= 0; i--) {
            res += to_string(z[i]);
        }
        return res;
    }
};