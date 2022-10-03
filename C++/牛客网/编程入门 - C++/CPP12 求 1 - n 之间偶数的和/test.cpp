#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘输入一个 int 类型的正整数 n，n 的范围为[1, 1000]，求 1 - n 之间偶数的和，并输出。
输入描述：
输入任意一个 int 类型的正整数，n 的范围为[1, 1000]
输出描述：
输出 1 - n 之间偶数的和
示例1
输入：
4
输出：
6
示例2
输入：
10
输出：
30
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!(i % 2))
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}