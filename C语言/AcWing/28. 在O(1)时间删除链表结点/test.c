#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定单向链表的一个节点指针，定义一个函数在O(1)时间删除该结点。

假设链表一定存在，并且该节点一定不是尾节点。

数据范围
链表长度 [1,500]。

样例
输入：链表 1->4->6->8
      删掉节点：第2个节点即6（头节点为第0个节点）

输出：新链表 1->4->8
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node)
{
    node->val = node->next->val; // 将删除节点的下一个节点的值，赋给被删除节点
    node->next = node->next->next; // 改变删除节点和删除节点下一个节点的下一个节点的链接，相当于赋值了删除节点的下一个节点
    // 类似删除节点的删除
}