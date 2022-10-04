#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
 
示例 1：

输入：head = [1,2,6,3,4,5,6], val = 6
输出：[1,2,3,4,5]
示例 2：

输入：head = [], val = 1
输出：[]
示例 3：

输入：head = [7,7,7,7], val = 7
输出：[]

*/

#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。

示例 1：


输入：head = [1,2,6,3,4,5,6], val = 6
输出：[1,2,3,4,5]
示例 2：

输入：head = [], val = 1
输出：[]
示例 3：

输入：head = [7,7,7,7], val = 7
输出：[]

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode* cur = head;
    struct ListNode* prep = NULL;

    while (cur)
    {
        if (cur->val == val)
        {
            // 头删
            if (cur == head)
            {
                head = cur->next;
                cur = head;
            }
            // 其他节点删除
            else
            {
                prep->next = cur->next;
                free(cur);
                cur = prep->next;
            }
        }
        // 迭代往后走
        else
        {
            prep = cur;
            cur = cur->next;
        }
    }
    return head;
}