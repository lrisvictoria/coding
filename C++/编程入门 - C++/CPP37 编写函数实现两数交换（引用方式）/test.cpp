#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
编写一个函数，实现两个整数的交换，要求采用引用的方式实现。
输入描述：
键盘输入 2 个整数 m 和 n
输出描述：
输出交换后 m 和 n 的值，中间使用空格隔开
示例1
输入：
10
20
输出：
20 10
*/

#include <iostream>
using namespace std;

void Swap(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {

    int m, n;
    cin >> m;
    cin >> n;

    Swap(m, n);


    cout << m << " " << n << endl;

    return 0;
}