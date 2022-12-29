/*
描述
输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数。

数据范围：输入的字符串长度满足 1 \le n \le 1000 \1≤n≤1000

输入描述：
输入一行字符串，可以有空格

输出描述：
统计其中英文字符，空格字符，数字字符，其他字符的个数

示例1
输入：
1qazxsw23 edcvfr45tgbn hy67uj m,ki89ol.\\/;p0-=\\][
复制
输出：
26
3
10
12
*/

// 题解：https://www.nowcoder.com/discuss/438156015029280768

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int cntspace = 0, cntalpha = 0, cntdigit = 0, cntother = 0;
    for (auto ch : str) {
        if (isspace(ch)) {
            cntspace++;
        }
        else if (isalpha(ch)) {
            cntalpha++;
        }
        else if (isdigit(ch)) {
            cntdigit++;
        }
        else {
            cntother++;
        }
    }

    cout << cntalpha << endl << cntspace << endl << cntdigit << endl << cntother << endl;

    return 0;
}