#define _CRT_SECURE_NO_WARNINGS 1 

/*
输入整数数组 arr ，找出其中最小的 k 个数。例如，输入4、5、1、6、2、7、3、8这8个数字，则最小的4个数字是1、2、3、4。

示例 1：

输入：arr = [3,2,1], k = 2
输出：[1,2] 或者 [2,1]
示例 2：

输入：arr = [0,1,2,1], k = 1
输出：[0]
 

限制：

0 <= k <= arr.length <= 10000
0 <= arr[i] <= 10000

*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 // topK 问题

void Swap(int* p1, int* p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void AdjustDown(int* a, int n, int parent)
{
    int child = 2 * parent + 1;
    while (child < n) {
        // 建大堆
        if (child + 1 < n && a[child + 1] > a[child]) {
            child++;
        }
        if (a[child] > a[parent]) {
            Swap(&a[child], &a[parent]);
            parent = child;
            child = 2 * parent + 1;
        }
        else {
            break;
        }
    }
}

int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize)
{
    for (int i = (k - 1 - 1) / 2; i >= 0; i--) {
        AdjustDown(arr, k, i);
    }
    // 从 k 开始往后遍历
    for (int j = k; j < arrSize; j++) {
        // 如果后续元素小于堆顶，那么就进堆，并向下调整
        if (arr[j] < arr[0]) {
            arr[0] = arr[j];
            // 从 0 开始向下调整
            AdjustDown(arr, k, 0);
        }
    }
    *returnSize = k;
    return arr;
}