#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘随机输入 6 个整数，将这些数据保存到数组中，利用指针遍历数组中的元素并打印。
输入描述：
键盘随机输入 6 个整数
输出描述：
输出数组中的所有元素，每个元素中间使用空格隔开
例如：10 20 30 40 50 60
示例1
输入：
10
20
30
40
50
60
输出：
10 20 30 40 50 60
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int* ptr = arr;

    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}