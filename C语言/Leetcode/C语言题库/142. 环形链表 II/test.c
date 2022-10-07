#define _CRT_SECURE_NO_WARNINGS 1 

/*

给定一个链表的头节点  head ，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。

如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 
为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
如果 pos 是 -1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。

不允许修改 链表。

示例 1：

输入：head = [3,2,0,-4], pos = 1
输出：返回索引为 1 的链表节点
解释：链表中有一个环，其尾部连接到第二个节点。
示例 2：

输入：head = [1,2], pos = 0
输出：返回索引为 0 的链表节点
解释：链表中有一个环，其尾部连接到第一个节点。
示例 3：

输入：head = [1], pos = -1
输出：返回 null
解释：链表中没有环。

*/

// 思路1：公式法

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* detectCycle(struct ListNode* head)
//{
//    struct ListNode* fast, * slow;
//    fast = slow = head;
//
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//
//        // 相遇
//        if (fast == slow)
//        {
//            struct ListNode* meetNode = slow;
//            // 公式推导
//            while (meetNode != head)
//            {
//                head = head->next;
//                meetNode = meetNode->next;
//            }
//            return meetNode;
//        }
//    }
//    return NULL;
//}

// 思路2：双指针找相交点，将链表分为两部分，转化为相交链表解题

struct ListNode* detectCycle(struct ListNode* head)
{
    struct ListNode* fast, * slow;
    fast = slow = head;
    struct ListNode* tail = NULL;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        // 相遇
        if (fast == slow)
        {
            tail = slow;
            break;
        }
    }

    // 没有相遇
    if (tail == NULL)
    {
        return NULL;
    }
    struct ListNode* newHead = tail->next;
    int lenH = 1, lenN = 1;

    struct ListNode* curH = head, * curN = newHead;

    while (curH != tail)
    {
        lenH++;
        curH = curH->next;
    }

    while (curN != tail)
    {
        lenN++;
        curN = curN->next;
    }

    struct ListNode* longList = lenH > lenN ? head : newHead;
    struct ListNode* shortList = lenH > lenN ? newHead : head;

    int gap = abs(lenH - lenN);

    while (gap--)
    {
        longList = longList->next;
    }

    while (longList != shortList)
    {
        longList = longList->next;
        shortList = shortList->next;
    }

    return longList;
}