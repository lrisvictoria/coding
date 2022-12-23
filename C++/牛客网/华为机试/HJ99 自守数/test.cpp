/*
描述
自守数是指一个数的平方的尾数等于该数自身的自然数。例如：25^2 = 625，76^2 = 5776，9376^2 = 87909376。请求出n(包括n)以内的自守数的个数


数据范围： 1 \le n \le 10000 \1≤n≤10000


输入描述：
int型整数

输出描述：
n以内自守数的数量。

示例1
输入：
6
复制
输出：
4
复制
说明：
有0，1，5，6这四个自守数
示例2
输入：
1
复制
输出：
2
复制
说明：
有0, 1这两个自守数
*/

#include <iostream>

using namespace std;

void isprotect(int x, int& cnt)
{
    int tmp = x;
    int a = x * x;
    bool flag = true;

    while (tmp) {
        if (tmp % 10 != a % 10) {
            flag = false;
            return;
        }
        tmp /= 10;
        a /= 10;
    }
    if (flag) {
        cnt++;
    }
}

int main()
{
    int n, cnt = 2;
    cin >> n;

    while (n > 1) {
        isprotect(n, cnt);
        n--;
    }

    cout << cnt << endl;

    return 0;
}