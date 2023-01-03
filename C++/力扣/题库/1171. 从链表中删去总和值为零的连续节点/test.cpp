/*
给你一个链表的头节点 head，请你编写代码，反复删去链表中由 总和 值为 0 的连续节点组成的序列，直到不存在这样的序列为止。

删除完毕后，请你返回最终结果链表的头节点。

 

你可以返回任何满足题目要求的答案。

（注意，下面示例中的所有序列，都是对 ListNode 对象序列化的表示。）

示例 1：

输入：head = [1,2,-3,3,1]
输出：[3,1]
提示：答案 [1,2,1] 也是正确的。
示例 2：

输入：head = [1,2,3,-3,4]
输出：[1,2,4]
示例 3：

输入：head = [1,2,3,-3,-2]
输出：[1]
 

提示：

给你的链表中可能有 1 到 1000 个节点。
对于链表中的每个节点，节点的值：-1000 <= node.val <= 1000.

*/

// 题解：https://leetcode.cn/problems/remove-zero-sum-consecutive-nodes-from-linked-list/solution/ha-xi-biao-qian-zhui-he-by-unruffled-pik-f7ro/

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int sum = 0;
        unordered_map<int, ListNode*> hash;
        ListNode* dummy = new ListNode(0, head);

        // 对链表求前缀和
        for (ListNode* cur = dummy; cur != nullptr; cur = cur->next) {
            sum += cur->val;
            hash[sum] = cur;
        }

        sum = 0;
        for (ListNode* cur = dummy; cur != nullptr; cur = cur->next) {
            // 如果当前节点的前缀和等于某位置前缀和的值，说明 (cur, hash[sum] ] 区间都是要被删除的
            // 这种情况就可以把 cur->next = hash[sum]->next
            // 跳过中间的节点，即删除
            sum += cur->val;
            cur->next = hash[sum]->next;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};