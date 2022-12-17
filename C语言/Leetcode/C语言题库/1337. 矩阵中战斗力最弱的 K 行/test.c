/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

/*
给你一个大小为 m * n 的矩阵 mat，矩阵由若干军人和平民组成，分别用 1 和 0 表示。

请你返回矩阵中战斗力最弱的 k 行的索引，按从最弱到最强排序。

如果第 i 行的军人数量少于第 j 行，或者两行军人数量相同但 i 小于 j，那么我们认为第 i 行的战斗力比第 j 行弱。

军人 总是 排在一行中的靠前位置，也就是说 1 总是出现在 0 之前。

 

示例 1：

输入：mat =
[[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]],
k = 3
输出：[2,0,3]
解释：
每行中的军人数目：
行 0 -> 2
行 1 -> 4
行 2 -> 1
行 3 -> 2
行 4 -> 5
从最弱到最强对这些行排序后得到 [2,0,3,1,4]
示例 2：

输入：mat =
[[1,0,0,0],
 [1,1,1,1],
 [1,0,0,0],
 [1,0,0,0]],
k = 2
输出：[0,2]
解释：
每行中的军人数目：
行 0 -> 1
行 1 -> 4
行 2 -> 1
行 3 -> 1
从最弱到最强对这些行排序后得到 [0,2,3,1] 

提示：

m == mat.length
n == mat[i].length
2 <= n, m <= 100
1 <= k <= m
matrix[i][j] 不是 0 就是 1

*/

// 二分 + 小堆

int heap[100][2];

void Swap(int** p1, int** p2)
{
    int* tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

// 向下调增
void AdjustDown(int n, int parent)
{
    int child = 2 * parent + 1;

    while (child < n) {
        // 求最大孩子
        if (child + 1 < n && (heap[child + 1][0] < heap[child][0] || (heap[child + 1][0] == heap[child][0] && heap[child + 1][1] < heap[child][1]))) {
            child++;
        }
        // 判断是否调整
        if (heap[child][0] < heap[parent][0] || (heap[child][0] == heap[parent][0] && heap[child][1] < heap[parent][1])) {
            // 交换两行
            Swap(heap[child], heap[parent]);
            parent = child;
            child = 2 * parent + 1;
        }
        else
        {
            break;
        }
    }
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize)
{
    int cnt = 0; // 记录 res 中当前元素个数
    for (int i = 0; i < matSize; i++) {
        // 将 k 行元素的索引存入
        int l = 0, r = *matColSize - 1;
        while (l < r) {
            int mid = l + r  + 1>> 1;
            if (mat[i][mid] == 0) {
                r = mid - 1;
            }
            if (mat[i][mid] == 1) {
                l = mid;
            }
        }
        // 0 下标处存战斗力
        // 1 下标处存索引
        if (mat[i][l] != 1)
        {
            heap[cnt][0] = 0;
        }
        else
        {
            heap[cnt][0] = l + 1;
        }
        heap[cnt][1] = i;
        cnt++;
    }

    // 将 res 数组中元素建小堆，不断取出堆顶元素
    int* ans = (int*)malloc(sizeof(int) * k);
    for (int i = (cnt - 1 - 1) / 2; i >= 0; i--) {
        // 向下调整堆中元素
        AdjustDown(cnt, i);
    }

    int end = cnt - 1;
    while (k > 0)
    {
        ans[(*returnSize)++] = heap[0][1];
        Swap(heap[0], heap[end]);
        // 将索引存入 ans 数组
        AdjustDown(end, 0);
        end--;
        k--;
    }
    return ans;
}


//void print(int** mat, int matSize, int* matColSize)
//{
//    for (int i = 0; i < matSize; i++)
//    {
//        for (int j = 0; j < *matColSize; j++)
//        {
//            printf("%d ", mat[i][j]);
//        }
//        printf("\n");
//    }
//}

/*
// 二分 + 排序
typedef struct data
{
    int combat; // 战斗力
    int row; // 
}data;

int cmp(const void* e1, const void* e2)
{
    data* ee1 = (data*)e1;
    data* ee2 = (data*)e2;
    return (ee1->combat > ee2->combat) || (ee1->combat == ee2->combat && ee1->row > ee2->row);
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize)
{
    // 答案数组
    int* res = (int*)malloc(sizeof(int) * k);
    data* tmp = (data*)malloc(sizeof(data) * matSize);
    int col = *matColSize;
    *returnSize = k;

    // 二分，将数据存入 tmp 中
    for (int i = 0; i < matSize; i++) {
        int l = 0, r = col - 1;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (mat[i][mid] == 1) {
                l = mid;
            } else if (mat[i][mid] == 0) {
                r = mid - 1;
            }
        }
        if (mat[i][l] != 1) {
            tmp[i].combat = 0;
        } else {
            tmp[i].combat = l + 1;
        }
        tmp[i].row = i;
    }
    
    qsort(tmp, matSize, sizeof(data), cmp);

    for (int i = 0; i < k; i++)
    {
        res[i] = tmp[i].row;
    }

    return res;
}

*/

int main()
{
    int** mat = (int**)malloc(sizeof(int*) * 5);
    
    for (int i = 0; i < 5; i++)
    {
        *(mat + i) = (int*)malloc(sizeof(int) * 5);
    }
    
    mat[0][0] = 1; mat[0][1] = 1; mat[0][2] = 0; mat[0][3] = 0; mat[0][4] = 0;
    mat[1][0] = 1; mat[1][1] = 1; mat[1][2] = 1; mat[1][3] = 1; mat[1][4] = 0;
    mat[2][0] = 1; mat[2][1] = 0; mat[2][2] = 0; mat[2][3] = 0; mat[2][4] = 0;
    mat[3][0] = 1; mat[3][1] = 1; mat[3][2] = 0; mat[3][3] = 0; mat[3][4] = 0;
    mat[4][0] = 1; mat[4][1] = 1; mat[4][2] = 1; mat[4][3] = 1; mat[4][4] = 1;

    int matSize = 5;
    int matColSize = 5;
    int returnSize = 0;
    int k = 3;

    //print(mat, matSize, &matColSize);

    
    
    int* res = kWeakestRows(mat, matSize, &matColSize, k, &returnSize);

    for (int i = 0; i < k; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}