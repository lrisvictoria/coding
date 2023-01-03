/*

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