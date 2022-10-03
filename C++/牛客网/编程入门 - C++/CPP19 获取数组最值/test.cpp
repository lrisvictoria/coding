#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘随机输入 6 个整数，将这些数据保存到数组中，获取数组中的最小值和最大值并输出。
输入描述：
键盘随机输入 6 个整数
输出描述：
输出数组中的最小值和最大值，两个值中间使用空格隔开
示例1
输入：
5
12
80
7
15
60
输出：
5 80
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    int max = 0, min = 100;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max;
    return 0;
}