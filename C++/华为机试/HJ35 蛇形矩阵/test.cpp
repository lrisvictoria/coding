#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。

例如，当输入5时，应该输出的三角形为：

1 3 6 10 15

2 5 9 14

4 8 13

7 12

11


输入描述：
输入正整数N（N不大于100）

输出描述：
输出一个N行的蛇形矩阵。

示例1
输入：
4
输出：
1 3 6 10
2 5 9
4 8
7
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n)
    {
        int k = 1;//每行第一个元素
        for (int i = 1; i <= n; i++)
        {
            cout << k << " ";//输出第一个元素
            int tmp = k;
            for (int j = i + 1; j <= n; j++)//输出后续元素
            {
                tmp += j;//调整
                cout << tmp << " ";
            }
            cout << endl;//换行
            k += i;//调整
        }
    }
    return 0;
}