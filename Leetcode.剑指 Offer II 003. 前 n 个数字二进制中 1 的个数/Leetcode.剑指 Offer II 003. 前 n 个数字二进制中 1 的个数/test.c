#define _CRT_SECURE_NO_WARNINGS 1 
//给定一个非负整数 n ，请计算 0 到 n 之间的每个数字的二进制表示中 1 的个数，并输出一个数组。

/*
输入: n = 2
输出: [0,1,1]
解释: 
0 --> 0
1 --> 1
2 --> 10
*/

/*
输入: n = 5
输出: [0,1,1,2,1,2]
解释:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
*/

//plan1：
//int* countBits(int n, int* returnSize) {
//    *returnSize = n + 1;//注意这里返回的长度
//    int* ans = malloc(sizeof(int) * (n + 1));//malloc一个数组
//    int count = 0;//统计一个数的二进制中有多少个1
//    int k = 0;//返回数组的下标
//    for (int i = 0; i <= n; i++)//遍历的次数为n + 1次
//    {
//        count = 0;//每次循环需要重置
//        for (int j = 0; j < 32; j++)
//        {
//            if ((i >> j) & 1)
//                count++;
//        }
//        ans[k++] = count;//count累加完毕后录入ans
//    }
//    return ans;
//}
//plan2：
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* ans = malloc(sizeof(int) * (n + 1));
    int count = 0;
    int k = 0;
    for (int i = 0; i <= n; i++)
    {
        count = 0;
        int j = i;//拷贝一份i，再循环中使用避免i值发生改变
        while (j)
        {
            j = j & (j - 1);
            count++;
        }
        ans[k++] = count;
    }
    return ans;
}
//还有一种%2/2的做法和左移1的做法
//左移1的做法好像在这题中不使用，我就使用比较好理解且效率较高的办法了~