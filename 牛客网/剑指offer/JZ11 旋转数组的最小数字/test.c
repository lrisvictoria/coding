#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//有一个长度为 n 的非降序数组，比如[1, 2, 3, 4, 5]，将它进行旋转，即把一个数组最开始的若干个元素搬到数组的末尾，
//变成一个旋转数组，比如变成了[3, 4, 5, 1, 2]，或者[4, 5, 1, 2, 3]这样的。请问，给定这样一个旋转数组，求数组中的最小值。
//
//数据范围：1 \le n \le 100001≤n≤10000，数组中任意元素的值: 0 \le val \le 100000≤val≤10000
//要求：空间复杂度：O(1)O(1) ，时间复杂度：O(logn)O(logn)
//示例1
//输入：
//[3, 4, 5, 1, 2]
//返回值：
//1
//示例2
//输入：
//[3, 100, 200, 3]
//返回值：
//3
//plan1：二分查找
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    while (left < right)
//    {
//        int mid = left + (right - left) / 2;
//        if (rotateArray[mid] > rotateArray[right])
//            left = mid + 1;
//        else if (rotateArray[mid] < rotateArray[right])
//            right = mid;
//        else
//            right--;
//    }
//    return rotateArray[left];
//}
//plan2：暴力求解
void bubbleSort(int* arr, int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        int flag = 1;
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0;
            }
        }
        if (1 == flag)
            break;
    }
}
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    bubbleSort(rotateArray, rotateArrayLen);
    return rotateArray[0];
}