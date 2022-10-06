#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个链表的 头节点 head ，请判断其是否为回文链表。

如果一个链表是回文，那么链表节点序列从前往后看和从后往前看是相同的。

示例 1：

输入: head = [1,2,3,3,2,1]
输出: true
示例 2：

输入: head = [1,2]
输出: false

*/

// 能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode* fast, * slow;
    fast = slow = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* cur = head;
    struct ListNode* newhead = NULL;
    while (cur)
    {
        struct ListNode* next = cur->next;

        // 头插
        cur->next = newhead;
        newhead = cur;

        // 迭代
        cur = next;
    }

    return newhead;
}

bool isPalindrome(struct ListNode* head)
{
    struct ListNode* mid = middleNode(head);
    struct ListNode* rHead = reverseList(mid);

    struct ListNode* curH = head;
    struct ListNode* curR = rHead;

    while (curH && curR)
    {
        if (curH->val != curR->val)
        {
            return false;
        }
        curH = curH->next;
        curR = curR->next;
    }
    return true;
}