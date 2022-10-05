#define _CRT_SECURE_NO_WARNINGS 1 

/*
现有一链表的头指针 ListNode* pHead，给一定值x，
编写一段代码将所有小于x的结点排在其余结点之前，且不能改变原来的数据顺序，返回重新排列后的链表的头指针。
*/

// c++兼容C的语法

// 思路：创建两个新节点，建立哨兵位
// 然后将元素尾插到链表处
// 将两个链表链接并返回
// 记得释放哨兵位，控制链表不能为环

class Partition {
public:
    ListNode* partition(ListNode* pHead, int x)
    {
        struct ListNode* lessTail, * lessHead, * greaterTail, * greaterHead;
        // 建立哨兵位
        lessTail = lessHead = (struct ListNode*)malloc(sizeof(struct ListNode));
        greaterTail = greaterHead = (struct ListNode*)malloc(sizeof(struct ListNode));

        struct ListNode* cur = pHead;

        while (cur)
        {
            if (cur->val < x)
            {
                lessTail->next = cur;
                lessTail = cur;
            }
            else
            {
                greaterTail->next = cur;
                greaterTail = cur;
            }
            cur = cur->next;
        }
        lessTail->next = greaterHead->next;
        greaterTail->next = NULL;

        struct ListNode* ans = lessHead->next;
        free(lessHead);
        free(greaterHead);
        return ans;

    }
};