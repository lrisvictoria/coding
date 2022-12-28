/*
给你一个单链表的引用结点 head。链表中每个结点的值不是 0 就是 1。已知此链表是一个整数数字的二进制表示形式。

请你返回该链表所表示数字的 十进制值 。

 

示例 1：



输入：head = [1,0,1]
输出：5
解释：二进制数 (101) 转化为十进制数 (5)
示例 2：

输入：head = [0]
输出：0
示例 3：

输入：head = [1]
输出：1
示例 4：

输入：head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
输出：18880
示例 5：

输入：head = [0,0]
输出：0
 

提示：

链表不为空。
链表的结点总数不超过 30。
每个结点的值不是 0 就是 1。

*/

// 题解：https://leetcode.cn/problems/convert-binary-number-in-a-linked-list-to-integer/solution/kong-jian-huan-shi-jian-by-unruffled-pik-nvch/

// 思路1：额外空间

//class Solution {
//public:
//    int getDecimalValue(ListNode* head) {
//        vector<int> bin;
//        for (ListNode* cur = head; cur != nullptr; cur = cur->next) {
//            bin.push_back(cur->val);
//        }
//
//        // 1 0 1
//        int res = 0, index = 0;
//        for (int i = bin.size() - 1; i >= 0; i--) {
//            res += bin[i] * (int)pow(2, index);
//            index++;
//        }
//        return res;
//    }
//};

// 思路2：模拟

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        for (ListNode* cur = head; cur != nullptr; cur = cur->next) {
            res = res * 2 + cur->val;
        }
        return res;
    }
};