#define _CRT_SECURE_NO_WARNINGS 1 
/*
设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
*/

/*
输入：n = 2
输出：2
解释：有两种方法可以爬到楼顶。
1. 1 阶 + 1 阶
2. 2 阶
*/

int climbStairs(int n) {
    int a = 1;
    int b = 2;
    int c = 0;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else
        return c;
}