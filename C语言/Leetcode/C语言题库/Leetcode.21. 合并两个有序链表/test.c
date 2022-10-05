#define _CRT_SECURE_NO_WARNINGS 1 

//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
//
//
//
//示例 1：
//
//
//输入：l1 = [1, 2, 4], l2 = [1, 3, 4]
//输出：[1, 1, 2, 3, 4, 4]
//示例 2：
//
//输入：l1 = [], l2 = []
//输出：[]
//示例 3：
//
//输入：l1 = [], l2 = [0]
//输出：[0]

// 思路1：依次比较链表中节点，取小的结点尾插到新链表(需要判断新链表是否无结点)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode* head = NULL, * tail = NULL;
//
//    if (list1 == NULL && list2)// 某一个链表为空
//    {
//        return list2;
//    }
//
//    if (list2 == NULL && list1)
//    {
//        return list1;
//    }
//
//    while (list1 && list2)
//    {
//        if (list1->val < list2->val)
//        {
//            if (head == NULL)
//            {
//                head = tail = list1;
//            }
//            else
//            {
//                // 当前结点(链表的尾链接到list1)
//                tail->next = list1;
//                // 链表的尾变成list1
//                tail = list1;
//            }
//            list1 = list1->next;
//        }
//        else
//        {
//            if (head == NULL)
//            {
//                head = tail = list2;
//            }
//            else
//            {
//                tail->next = list2;
//                tail = list2;
//            }
//            list2 = list2->next;
//        }
//    }
//
//    if (list1)
//    {
//        tail->next = list1;
//    }
//    if (list2)
//    {
//        tail->next = list2;
//    }
//    return head;
//}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 思路2：遍历，在外部就取较小值给一个节点，不用循环中判断
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode* head = NULL, * tail = NULL;
//
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//
//    if (list1->val < list2->val)
//    {
//        head = tail = list1;
//        list1 = list1->next;
//    }
//    else
//    {
//        head = tail = list2;
//        list2 = list2->next;
//    }
//
//    while (list1 && list2)
//    {
//        if (list1->val < list2->val)
//        {
//            // 当前结点(链表的尾链接到list1)
//            tail->next = list1;
//            // 链表的尾变成list1
//            tail = list1;
//            list1 = list1->next;
//        }
//        else
//        {
//            tail->next = list2;
//            tail = list2;
//            list2 = list2->next;
//        }
//    }
//
//    if (list1)
//    {
//        tail->next = list1;
//    }
//    if (list2)
//    {
//        tail->next = list2;
//    }
//    return head;
//}

// 思路3：设定哨兵位
// 最后拷贝哨兵位下一个节点，释放哨兵位，返回这个节点

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode* head = NULL, * tail = NULL;

    if (list1 == NULL)
    {
        return list2;
    }

    if (list2 == NULL)
    {
        return list1;
    }


    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            // 当前结点(链表的尾链接到list1)
            tail->next = list1;
            // 链表的尾变成list1
            tail = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            tail = list2;
            list2 = list2->next;
        }
    }

    if (list1)
    {
        tail->next = list1;
    }
    if (list2)
    {
        tail->next = list2;
    }

    struct ListNode* ans = head->next;
    free(head);

    return ans;
}