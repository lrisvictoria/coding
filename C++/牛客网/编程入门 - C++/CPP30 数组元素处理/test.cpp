#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
有一个数组 int arr[n]，要求写一个函数：void func(int *p, int n);将数组 arr 中为 0 的元素都移至数组末尾，将非 0 的元素移至开始（保持原来的顺序不变）。
例如：
数组中元素原来是：1 0 3 4 0 -3 5
经过 func 处理后：1 3 4 -3 5 0 0
输入描述：
键盘输入 6 个整数，保存到数组中
输出描述：
经过 func 处理后数组的元素，元素和元素之间使用空格隔开
例如：1 3 4 -3 5 0 0
示例1
输入：
1
0
3
4
0
-3
输出：
1 3 4 -3 0 0
*/

//遍历
//#include <iostream>
//using namespace std;
//
//void func(int* p, int n);
//
//int main() {
//
//    int arr[6] = { 0 };
//    for (int i = 0; i < 6; i++) {
//        cin >> arr[i];
//    }
//
//    func(arr, 6);
//
//    for (int i = 0; i < 6; i++) {
//        if (i == 5) {
//            cout << arr[i] << endl;
//        }
//        else {
//            cout << arr[i] << " ";
//        }
//    }
//
//    return 0;
//}
//
//void func(int* p, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (!p[i])
//        {
//            for (int j = i; j < n - 1; j++)
//            {
//                p[j] = p[j + 1];
//            }
//            p[n - 1] = 0;
//            n--;
//        }
//    }
//}

//双指针
#include <iostream>
using namespace std;

void func(int* p, int n);

int main() {

    int arr[6] = { 0 };
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    func(arr, 6);

    for (int i = 0; i < 6; i++) {
        if (i == 5) {
            cout << arr[i] << endl;
        }
        else {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

void func(int* p, int n)
{
    int left = 0, right = 0;//左指针搜索0，右指针搜索
    while (right < n)
    {
        if (p[right])
        {
            int tmp = p[left];
            p[left] = p[right];
            p[right] = tmp;
            left++;
        }
        right++;
    }
}