/*
描述
请考虑性能
输入描述：
一个整数N
输出描述：
小于N的质数数量
示例1
输入：
10
复制
输出：
4
复制
说明：
N=10，质数有 [2, 3, 5, 7]
备注：
0、1 不属于质数。
*/

// for 循环从 3 开始给奇数
// 循环中从 3 开始，遍历到 sqrt(n)
// 减少循环次数
// 这个最优
// 另一个方法不行

#include <iostream>
#include <cmath>

using namespace std;

void isprime(int n, int& cnt)
{
    bool flag = true;
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cnt++;
    }
}

int main()
{
    int n, cnt = 1;
    cin >> n;

    // 从 3 开始
    for (int i = 3; i < n; i += 2) {
        isprime(i, cnt);
    }

    cout << cnt << endl;

    return 0;
}