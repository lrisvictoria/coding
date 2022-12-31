/*
描述
某种特殊的数列a1, a2, a3, ...的定义如下：a1 = 1, a2 = 2, ... , an = 2 * an − 1 + an - 2 (n > 2)。

给出任意一个正整数k，求该数列的第k项模以32767的结果是多少？

输入描述：
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1 ≤ k < 1000000)。
输出描述：
n行，每行输出对应一个输入。输出应是一个非负整数。
示例1
输入：
2
1
8
复制
输出：
1
408
*/

// 题解：https://www.nowcoder.com/discuss/438773285128585216

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> res;

    res.push_back(1);
    res.push_back(2);

    while (n--) {
        cin >> m;

        if (res.size() >= m) {
            cout << res[m - 1] << endl;
        }
        else {
            for (int i = res.size(); i < m; i++) {
                res[i] = 2 * res[i - 1] + res[i - 2];
                res.push_back(res[i] % 32767);
            }
            cout << res[m - 1] << endl;
        }
    }

    return 0;
}