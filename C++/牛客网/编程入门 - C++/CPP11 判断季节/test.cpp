#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘录入一个月份 month，判断属于哪个季节。（3 - 5 月为春季、6 - 8 月为夏季、9 - 11 月为秋季、12，1，2 月为冬季）
输入描述：
输入任意一个月份整数，范围在 1 - 12
输出描述：
输出对应月份的季节，3 - 5 月为春季、6 - 8 月为夏季、9 - 11 月为秋季、12，1，2 月为冬季。如果输入的月份不是 1 - 12，则输出“不合法”。
示例1
输入：
3
输出：
春季
示例2
输入：
7
输出：
夏季
示例3
输入：
10
输出：
秋季
示例4
输入：
12
输出：
冬季
*/

#include <iostream>
using namespace std;

int main()
{

    int month;
    cin >> month;

    if (month >= 1 && month <= 12)//合法
    {
        if (month >= 3 && month <= 5)
            cout << "春季" << endl;
        else if (month >= 6 && month <= 8)
            cout << "夏季" << endl;
        else if (month >= 9 && month <= 11)
            cout << "秋季" << endl;
        else//春季
            cout << "冬季" << endl;
    }
    else//不合法
    {
        cout << "不合法" << endl;
    }
    return 0;
}