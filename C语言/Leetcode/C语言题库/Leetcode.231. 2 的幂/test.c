﻿#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个整数 n，请你判断该整数是否是 2 的幂次方。如果是，返回 true ；否则，返回 false 。

如果存在一个整数 x 使得 n == 2x ，则认为 n 是 2 的幂次方。

示例 1：

输入：n = 1
输出：true
解释：20 = 1
示例 2：

输入：n = 16
输出：true
解释：24 = 16
示例 3：

输入：n = 3
输出：false
示例 4：

输入：n = 4
输出：true
示例 5：

输入：n = 5
输出：false

*/

// 进阶：你能够不使用循环/递归解决此问题吗？

// 通过位运算解决
// 首先n为整数，n得大于0
// 其次n如果为2的幂，那么二进制表示只有1个1

// 思路1：将n-1，比如4
// n	：0000 0000 0000 0000 0000 0000 0000 0100
// n - 1：0000 0000 0000 0000 0000 0000 0000 0011
// 按位与结果必定为0，于是可以衍生出思路1：
// 时间复杂度：O(1) 空间复杂度：O(1)

//bool isPowerOfTwo(int n)
//{
//    return n > 0 && (n & (n - 1)) == 0;
//}

// 需要注意的是，==的优先级高于&，所以千万写成这样：(n & (n-1) == 0)
// 这样就会先计算(n - 1) == 0

// 思路2：n & (-n)
// 0000 0000 0000 0000 0000 0000 0000 0100
// 1000 0000 0000 0000 0000 0000 0000 0100
// 1111 1111 1111 1111 1111 1111 1111 1011
// 1111 1111 1111 1111 1111 1111 1111 1100

// 如果n & -n的值等于n本身，那么说明这就是2的幂
// 因为取得n的最后一位1，而n只有一位1，那么得到的就是n本身

// 时间复杂度：O(1) 空间复杂度：O(1)
bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (-n)) == n;
}