#define _CRT_SECURE_NO_WARNINGS 1 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     struct ListNode *next;
  * };
  */

void reverseLinklist(struct ListNode* head)
{
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
}

struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
{
    // 创建哨兵位，链接在 head 前面
    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newhead->next = head;
    newhead->val = -1;

    // 找左节点的前驱结点
    struct ListNode* prev = newhead;
    for (int i = 0; i < left - 1; i++)
    {
        prev = prev->next;
    }

    // 找右节点
    struct ListNode* rightNode = prev; // 从 prev 开始找
    for (int i = 0; i < right - left + 1; i++)
    {
        rightNode = rightNode->next;
    }

    // 记录左节点和右节点的后驱节点
    struct ListNode* leftNode = prev->next;
    struct ListNode* next = rightNode->next;

    // 断开左节点和右节点处的链接
    prev->next = NULL;
    rightNode->next = NULL;

    // 反转从左节点开始到右节点结束的链表
    reverseLinklist(leftNode);

    // 恢复链接
    prev->next = rightNode;
    leftNode->next = next;

    // 拷贝第一个节点，释放哨兵位
    struct ListNode* ans = newhead->next;
    free(newhead);
    return ans;
}