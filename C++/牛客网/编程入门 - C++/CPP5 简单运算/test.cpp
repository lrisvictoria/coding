#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘输入两个 int 范围的正整数 a 和 b，范围为[1, 9999]，
输出这两个 int 范围的正整数的和，差，积，商，模
（若 a > b 则输出 a - b，a / b，a % b 的值反之输出 b - a，b / a，b % a 的值，不考虑小数）
输入描述：
两个 int 范围的正整数，范围为[1, 9999]
输出描述：
输出这两个 int 范围的正整数的和，差，积，商，模
（若 a > b 则输出 a - b，a / b，a % b 的值反之输出 b - a，b / a，b % a 的值，不考虑小数和数据越界情况）
示例1
输入：
10
5
输出：
15 5 50 2 0
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    cin >> a;
    cin >> b;
    if (a > b)
    {
        cout << a + b << " " << a - b << " " << a * b << " " << a / b << " " << a % b << endl;
    }
    else
    {
        cout << a + b << " " << b - a << " " << a * b << " " << b / a << " " << b % a << endl;
    }
    return 0;
}