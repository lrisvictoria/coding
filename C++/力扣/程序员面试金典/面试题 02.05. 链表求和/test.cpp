/*
给定两个用链表表示的整数，每个节点包含一个数位。

这些数位是反向存放的，也就是个位排在链表首部。

编写函数对这两个整数求和，并用链表形式返回结果。

 

示例：

输入：(7 -> 1 -> 6) + (5 -> 9 -> 2)，即617 + 295
输出：2 -> 1 -> 9，即912
进阶：思考一下，假设这些数位是正向存放的，又该如何解决呢?

示例：

输入：(6 -> 1 -> 7) + (2 -> 9 -> 5)，即617 + 295
输出：9 -> 1 -> 2，即912

*/

// 题解：https://leetcode.cn/problems/sum-lists-lcci/solution/lian-biao-qiu-he-by-leetcode-solution-vcyz/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> a, b, c;
        for (ListNode* cur = l1; cur != nullptr; cur = cur->next) {
            a.push_back(cur->val);
        }
        for (ListNode* cur = l2; cur != nullptr; cur = cur->next) {
            b.push_back(cur->val);
        }
        int t = 0;
        for (int i = 0; i < a.size() || i < b.size(); i++) {
            if (i < a.size()) {
                t += a[i];
            }
            if (i < b.size()) {
                t += b[i];
            }
            c.push_back(t % 10);
            t /= 10;
        }
        if (t) {
            c.push_back(1);
        }
        ListNode* res = new ListNode(c[0]);
        ListNode* cur = res;
        for (int i = 1; i < c.size(); i++) {
            ListNode* node = new ListNode(c[i]);
            cur->next = node;
            cur = cur->next;
        }
        return res;
    }
};