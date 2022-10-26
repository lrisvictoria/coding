#define _CRT_SECURE_NO_WARNINGS 1 

// 输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

//示例 1：
//
//输入：head = [1, 3, 2]
//输出：[2, 3, 1]

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

// 首先算出链表长度，然后开辟数组
// 从头开始将元素倒着放入数组中
// 最后返回数组

int* reversePrint(struct ListNode* head, int* returnSize)
{
    struct ListNode* cur, * curr;
    cur = curr = head;
    int len = 0;
    // 算出链表长度
    while (cur)
    {
        cur = cur->next;
        ++len;
    }
    // 构建数组
    int* ans = (int*)malloc(sizeof(int) * len);
    *returnSize = len;
    while (len--)
    {
        ans[len] = curr->val;
        curr = curr->next;
    }
    return ans;
}