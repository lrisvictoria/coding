/*
递归乘法。 写一个递归函数，不使用 * 运算符， 实现两个正整数的相乘。可以使用加号、减号、位移，但要吝啬一些。

示例1:

 输入：A = 1, B = 10
 输出：10
示例2:

 输入：A = 3, B = 4
 输出：12
提示:

保证乘法范围不会溢出

*/

// 1 娱乐写法

class Solution {
public:
    int multiply(int A, int B) {
        char res[A][B];
        return sizeof(res);
    }
};

// 2 位运算 - 题解：https://leetcode.cn/problems/recursive-mulitply-lcci/solution/di-gui-by-unruffled-pikeizw-ium9/

class Solution {
public:
    int multiply(int A, int B) {
        if (B == 0) {
            return 0;
        }
        if (B == 1) {
            return A;
        }
        int C = 0;
        if (B & 1) {
            C = A;
        }
        return multiply(A, B >> 1) + multiply(A, B >> 1) + C;
    }
};