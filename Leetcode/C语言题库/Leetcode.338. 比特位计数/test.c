#define _CRT_SECURE_NO_WARNINGS 1 
/*
给你一个整数 n ，对于 0 <= i <= n 中的每个 i ，计算其二进制表示中 1 的个数 ，返回一个长度为 n + 1 的数组 ans 作为答案。

示例 1：

输入：n = 2
输出：[0,1,1]
解释：
0 --> 0
1 --> 1
2 --> 10
示例 2：

输入：n = 5
输出：[0,1,1,2,1,2]
解释：
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
*/
//这题也是老对手了，我就不画图了哈哈哈

int* countBits(int n, int* returnSize)
{
    *returnSize = n + 1;
    static int ans[100001] = { 0 };
    for (int i = 0; i <= n; i++)
    {
        int m = i;//拷贝一份数字
        int count = 0;//count每次进入需要置为0
        while (m)
        {
            m &= m - 1;//老生常谈
            count++;
        }
        ans[i] = count;
    }
    return ans;
}