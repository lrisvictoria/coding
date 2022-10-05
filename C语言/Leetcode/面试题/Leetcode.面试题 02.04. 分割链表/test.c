#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个链表的头节点 head 和一个特定值 x ，请你对链表进行分隔，使得所有 小于 x 的节点都出现在 大于或等于 x 的节点之前。

你不需要 保留 每个分区中各节点的初始相对位置。
   
示例 1：

输入：head = [1,4,3,2,5,2], x = 3
输出：[1,2,2,4,3,5]
示例 2：

输入：head = [2,1], x = 2
输出：[1,2]

*/

// 思路：寻找分割条件，左边头插，右边尾插，注意特判
struct ListNode* partition(struct ListNode* head, int x)
{
    struct ListNode* newhead, * newtail, * cur;
    newhead = newtail = NULL;
    cur = head;

    while (cur)
    {
        struct ListNode* next = cur->next;// 记录cur的下一个结点

        // 前区间
        if (cur->val < x)
        {
            cur->next = newhead;
            newhead = cur;

            // 无节点头插需要给尾变为和头一样的节点
            if (newtail == NULL)
            {
                newtail = newhead;// cur也可以，因为newhead当前就是cur
            }
        }
        // 后区间
        else
        {
            // 1. 无节点，直接尾插
            if (newhead == NULL && newtail == NULL)
                // if (newhead == NULL) 也可以因为头尾都为空
            {
                cur->next = NULL;
                newhead = newtail = cur;
            }
            // 2. 有节点
            else
            {
                newtail->next = cur;
                newtail = cur;

                newtail->next = NULL;
            }
        }
        cur = next;
    }
    return newhead;
}