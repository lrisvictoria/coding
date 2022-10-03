#define _CRT_SECURE_NO_WARNINGS 1
/*
描述
牛牛以前在老师那里得到了一个正整数数对(x, y), 牛牛忘记他们具体是多少了。

但是牛牛记得老师告诉过他x和y均不大于n, 并且x除以y的余数大于等于k。
牛牛希望你能帮他计算一共有多少个可能的数对。

输入描述：
输入包括两个正整数n,k(1 <= n <= 10^5, 0 <= k <= n - 1)。
输出描述：
对于每个测试用例, 输出一个正整数表示可能的数对数量。
示例1
输入：
5 2
输出：
7
说明：
满足条件的数对有(2,3),(2,4),(2,5),(3,4),(3,5),(4,5),(5,3)
*/

#include<stdio.h>
int main()
{
    long n = 0, k = 0;
    while (~scanf("%ld %ld", &n, &k))
    {
        if (k == 0)//处理0的情况，对于0，任何情况都满足
        {
            printf("%ld", n * n);
            continue;
        }
        long count = 0;
        for (long y = k + 1; y <= n; y++)
        {
            count += ((n / y) * (y - k)) + ((n % y < k) ? 0 : (n % y - k + 1));
        }
        printf("%ld\n", count);
    }
    return 0;
}