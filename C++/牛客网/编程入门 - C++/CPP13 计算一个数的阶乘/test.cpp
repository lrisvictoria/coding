#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘录入一个整数 n，求 n 的阶乘。
n 的阶乘为 n * (n - 1) * (n - 2) * ... * 1
例：5 的阶乘为 5 * 4 * 3 * 2 * 1
输入描述：
键盘录入任意一个整数 n ，范围为 1 - 20
输出描述：
输出该数的阶乘
示例1
输入：
5
输出：
120
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    long long factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}