#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
实现交换两个int类型变量的值
输入描述：
a变量和b变量的值，要求都是int类型的值
输出描述：
交换后a变量和b变量的值
示例1
输入：
1
2
输出：
2 1
复制
示例2
输入：
10
10
输出：
10 10
示例3
输入：
100
20
输出：
20 100
*/

#include <iostream>
using namespace std;
void swap(int& m, int& n)//引用
{
    int tmp = m;
    m = n;
    n = tmp;
}
int main() {

    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;

    //write your code here.......

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}