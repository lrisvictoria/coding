#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
 
示例 1：

输入：head = [1,2,3,4,5]
输出：[5,4,3,2,1]
示例 2：


输入：head = [1,2]
输出：[2,1]
示例 3：

输入：head = []
输出：[]

*/

// 思路1：迭代
//struct ListNode* reverseList(struct ListNode* head)
//{
//    if (head == NULL)
//        return NULL;
//    struct ListNode* n1, * n2, * n3;
//    n1 = NULL;
//    n2 = head;
//    n3 = head->next;
//
//    while (n2)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//            n3 = n3->next;
//    }
//    return n1;
//}

// 思路2：头插法
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* cur = head;
    struct ListNode* newnode = NULL;

    while (cur)
    {
        struct ListNode* next = cur->next;// 记录next
        // 头插
        cur->next = newnode;
        newnode = cur;
        // 迭代往后走
        cur = next;
    }
    return newnode;
}