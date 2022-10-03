#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
输入一个大于 1 的整数，判断其是不是质数(素数)。
输入描述：
输入一个大于 1 的整数
输出描述：
输出这个数是否是质数，如果是质数则输出“是质数”，否则输出“不是质数”
示例1
输入：
2
输出：
是质数
*/

//开平方
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (!(num % i))
        {
            cout << "不是质数" << endl;
            return 0;
        }
    }
    cout << "是质数" << endl;
    return 0;
}