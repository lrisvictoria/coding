#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定单个链表的头 head ，使用 插入排序 对链表进行排序，并返回 排序后链表的头 。

插入排序 算法的步骤:

插入排序是迭代的，每次只移动一个元素，直到所有元素可以形成一个有序的输出列表。
每次迭代中，插入排序只从输入数据中移除一个待排序的元素，找到它在序列中适当的位置，并将其插入。
重复直到所有输入数据插入完为止。
下面是插入排序算法的一个图形示例。部分排序的列表(黑色)最初只包含列表中的第一个元素。
每次迭代时，从输入数据中删除一个元素(红色)，并就地插入已排序的列表中。


*/

// 在写这道题目之前，先学习一下插入排序
// 插入排序就是给定一个 end 下标，升序从0开始，然后对数组进行排序
// 一趟插入排序相当于一次顺序表移动的操作
// 每次排序元素，保证前 end 个元素有序

//void InsertSort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		// 将 x 插入到 [0, end] 的有序区间
//		int end = i;
//		int x = a[end + 1];
//		// 一趟插入排序
//		while (end >= 0)
//		{
//			if (a[end] > x)
//			{
//				a[end + 1] = a[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		// 此时将 x 插入到相应位置
//		a[end + 1] = x;
//	}
//}

// 接下来进入正题

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* insertionSortList(struct ListNode* head)
{
    // 创建哨兵位，哨兵位链接在 head 之前
    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newhead->next = head;
    struct ListNode* end = head; // 已排序链表的最后一个节点
    struct ListNode* cur = head->next; // 待插入排序的节点
    // 插入排序
    while (cur)
    {
        if (end->val <= cur->val) // 有序 end 直接往后走
        {
            end = end->next;
        }
        else // 无序就需要进行插入排序
        {
            struct ListNode* prev = newhead; // 从哨兵位开始遍历
            // 让 prev 迭代到插入位置的前驱结点
            while (prev->next->val <= cur->val)
            {
                prev = prev->next;
            }
            // end 迭代到先前插入节点的后驱节点，将插入节点和 prev 链接
            end->next = cur->next;
            cur->next = prev->next;
            prev->next = cur;
        }
        cur = end->next; // 迭代
    }
    // 拷贝哨兵位的后驱节点，释放哨兵位
    struct ListNode* ans = newhead->next;
    free(newhead);
    return ans;
}