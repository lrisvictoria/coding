/*
字符串压缩。利用字符重复出现的次数，编写一种方法，实现基本的字符串压缩功能。比如，字符串aabcccccaaa会变为a2b1c5a3。

若“压缩”后的字符串没有变短，则返回原先的字符串。你可以假设字符串中只包含大小写英文字母（a至z）。

示例1:

 输入："aabcccccaaa"
 输出："a2b1c5a3"
示例2:

 输入："abbccd"
 输出："abbccd"
 解释："abbccd"压缩后为"a1b2c2d1"，比原字符串长度更长。
提示：

字符串长度在[0, 50000]范围内。

*/

// to_string 将数值转换为字符串

class Solution {
public:
    string compressString(string S) {
        // 处理空串
        if ((int)S.size() == 0) {
            return S;
        }

        string res;
        char ch = S[0];
        int cnt = 0; // 一开始 ch 定义为 0 
        for (int i = 0; i < S.size(); i++) {
            /*
            * 如果ch 和 s[i] 相同，需要统计相同字符个数
            * 如果不同，则停止，把 cnt 转换为字符串拼接到 res 中
            * 并且调整 ch, ch 为当前字符，由于cnt未计数，所以cnt = 1
            */
            if (ch == S[i]) {
                cnt++;
            }
            else {
                res += ch + to_string(cnt);
                ch = S[i];
                cnt = 1;
            }
        }

        // 最后一个串没有处理，出来处理一下
        res += ch + to_string(cnt);
        // 比较一下
        return res.size() >= S.size() ? S : res;
    }
};