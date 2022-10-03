#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘随机输入 6 个整数，将这些数据保存到数组中，
使用冒泡排序对数组中的元素进行从小到大顺序排序，
输出排序后数组中的元素（元素之间使用空格隔开）。
输入描述：
键盘随机输入 6 个整数
输出描述：
输出排序后数组中的元素（元素之间使用空格隔开）
示例1
输入：
24
69
80
57
13
16
输出：
13 16 24 57 69 80
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}