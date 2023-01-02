/*
描述
将一个节点数为 size 链表 m 位置到 n 位置之间的区间反转，要求时间复杂度 O(n)O(n)，空间复杂度 O(1)O(1)。
例如：
给出的链表为 1\to 2 \to 3 \to 4 \to 5 \to NULL1→2→3→4→5→NULL, m=2,n=4m=2,n=4,
返回 1\to 4\to 3\to 2\to 5\to NULL1→4→3→2→5→NULL.

数据范围： 链表长度 0 < size \le 10000<size≤1000，0 < m \le n \le size0<m≤n≤size，链表中每个节点的值满足 |val| \le 1000∣val∣≤1000
要求：时间复杂度 O(n)O(n) ，空间复杂度 O(n)O(n)
进阶：时间复杂度 O(n)O(n)，空间复杂度 O(1)O(1)
示例1
输入：
{1,2,3,4,5},2,4
复制
返回值：
{1,4,3,2,5}
复制
示例2
输入：
{5},1,1
复制
返回值：
{5}
*/

// 题解：https://www.nowcoder.com/discuss/439477388397854720

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    /**
     *
     * @param head ListNode类
     * @param m int整型
     * @param n int整型
     * @return ListNode类
     */
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head == nullptr || head->next == nullptr || m == n) {
            return head;
        }
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        // 将 prev 迭代到翻转区间首节点的前驱结点
        ListNode* prev = dummy;
        for (int i = 1; i < m; i++) {
            prev = prev->next;
        }

        // 区间翻转
        head = prev->next;
        for (int i = m; i < n; i++) {
            ListNode* tmp = head->next;
            head->next = tmp->next;
            tmp->next = prev->next;
            prev->next = tmp;
        }

        // 恢复现场
        head = dummy->next;
        delete dummy;
        return head;
    }
};