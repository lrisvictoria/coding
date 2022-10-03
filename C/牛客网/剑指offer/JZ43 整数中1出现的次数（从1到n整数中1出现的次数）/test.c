#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
输入一个整数 n ，求 1～n 这 n 个整数的十进制表示中 1 出现的次数
例如， 1~13 中包含 1 的数字有 1 、 10 、 11 、 12 、 13 因此共出现 6 次

注意：11 这种情况算两次

数据范围： 1 \le n \le 30000 \1≤n≤30000
进阶：空间复杂度 O(1) \O(1)  ，时间复杂度 O(lognn) \O(lognn)
示例1
输入：
13
返回值：
6
示例2
输入：
0
返回值：
0
*/

int NumberOf1Between1AndN_Solution(int n) {
    int count = 0;
    while (n)
    {
        int m = n;//拷贝一份，计算n的1的个数
        while (m)
        {
            if (m % 10 == 1)
            {
                count++;
            }
            m /= 10;//m调整不改变n
        }
        n--;//n逐渐减少
    }
    return count;
}