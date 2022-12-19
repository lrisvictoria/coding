/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>



 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

  /*
   * oldNum num数组中的数据
   * oldSize num数组的下标
   * nextNum 判断是否进位
   * cnt res 数组的大小
   */

int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    
    // 算出 k 的位数
    int kSize = 0, tmp = k;
    while (tmp) {
        ++kSize;
        tmp /= 10;
    }
    // 比较 k 和 数组的长度 防止 k 长度比数组大的情况
    int len = numSize > kSize ? numSize : kSize;

    // 多开一个空间，以便进位
    int* res = (int*)malloc(sizeof(int) * (len + 1));

    // 高精度加法
    int oldNum = 0, oldSize = numSize - 1, nextNum = 0, cnt = 0;
    for (int i = 0; i < len; ++i) {
        oldNum = 0;
        if (oldSize + 1) {
            oldNum = num[oldSize--];
        }
        nextNum += oldNum + k % 10 ;
        res[cnt++] = nextNum % 10;
        nextNum /= 10;
        k /= 10;
    }

    if (nextNum) {
        res[cnt++] = 1;
    }

    // 将有效数据逆置
    int l = 0, r = cnt - 1;
    while (l < r) {
        int tmp = res[l];
        res[l] = res[r];
        res[r] = tmp;
        l++;
        r--;
    }
    *returnSize = cnt;
    return res;
}

int main()
{
    int* nums = (int*)malloc(sizeof(int) * 3);
    if (nums == NULL) {
        perror("malloc fail");
        exit(-1);
    }
    nums[0] = 2;
    nums[1] = 1;
    nums[2] = 5;

    int returnSize = 0;

    int* ans = addToArrayForm(nums, 3, 806, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}