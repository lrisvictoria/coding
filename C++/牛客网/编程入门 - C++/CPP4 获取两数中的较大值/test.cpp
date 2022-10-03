#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘录入两个整数 a 和 b，获取这两个整数中的较大值，并输出。
输入描述：
输入任意两个整数
输出描述：
输出两个整数中的较大值
示例1
输入：
10
20
输出：
20
*/

#include <iostream>
using namespace std;

int main() {

    // write your code here......
    int a = 0, b = 0;
    cin >> a;
    cin >> b;
    cout << ((a > b) ? a : b) << endl;//逻辑操作符
    return 0;
}