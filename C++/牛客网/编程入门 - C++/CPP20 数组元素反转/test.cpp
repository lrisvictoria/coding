#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘随机输入 6 个整数，将这些数据保存到数组中，先将数组中元素按照格式输出，
然后再将数组元素反转，最后按照格式再次输出数组元素。
输入描述：
键盘随机输入 6 个整数
输出描述：
第一次按照格式输出数组中元素，每个元素中间使用逗号和空格隔开，整体使用中括号括起来。
例如：[5, 12, 80, 7, 15, 60]
第二次按照格式输出反转后数组中元素，每个元素中间使用逗号和空格隔开，整体使用中括号括起来。
例如：[60, 15, 7, 80, 12, 5]
示例1
输入：
5
12
80
7
15
60
输出：
[5, 12, 80, 7, 15, 60]
[60, 15, 7, 80, 12, 5]
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };

    int len = sizeof(arr) / sizeof(int);

    int left = 0, right = len - 1;

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << "[";
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }

    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }

    cout << "[";
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }

    return 0;
}