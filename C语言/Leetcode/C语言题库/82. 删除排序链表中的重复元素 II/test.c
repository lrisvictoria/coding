#define _CRT_SECURE_NO_WARNINGS 1 

/*
* 
给定一个已排序的链表的头 head ， 删除原始链表中所有重复数字的节点，只留下不同的数字 。返回 已排序的链表 。

示例 1：

输入：head = [1,2,3,3,4,4,5]
输出：[1,2,5]
示例 2：


输入：head = [1,1,1,2,3]
输出：[2,3]

*/

struct ListNode* deleteDuplicates(struct ListNode* head)
{
    if (head == NULL)
        return NULL;
    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newhead->next = head;
    struct ListNode* cur = newhead; // 从哨兵位开始遍历，防止元素第一个元素就是重复项

    while (cur->next && cur->next->next)
    {
        // 如果cur 的后驱节点，和其后驱节点的后驱节点相等
        // 说明这两个数都需要删除
        if (cur->next->val == cur->next->next->val)
        {
            // 记录这个数
            int num = cur->next->val;
            while (cur->next && cur->next->val == num)
            {
                // 拷贝 cur->next 并使 cur->next 迭代，释放节点
                struct ListNode* del = cur->next;
                cur->next = cur->next->next;
                free(del);
            }
        }
        else
        {
            // 否则说明正常，让 cur 正常向后迭代
            cur = cur->next;
        }
    }
    // 释放哨兵位，返回头结点
    struct ListNode* ans = newhead->next;
    free(newhead);
    return ans;
}