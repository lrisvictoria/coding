#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
键盘录入两个整数 a 和 b，并对 a 和 b 求和，输出结果。
输入描述：
输入任意两个 int 类型的整数，范围[-1000, 1000]
输出描述：
输出两个整数的和
示例1
输入：
1
2
输出：
3
*/

#include <iostream>
using namespace std;

int main() {

    
    int a = 0, b = 0;
    cin >> a;
    cin >> b;
    cout << a + b << endl;

    return 0;
}