#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个二叉树的根节点 root ， 检查它是否轴对称。

 

示例 1：


输入：root = [1,2,2,3,4,4,3]
输出：true
示例 2：


输入：root = [1,2,2,null,3,null,3]
输出：false
 

提示：

树中节点数目在范围 [1, 1000] 内
-100 <= Node.val <= 100

*/

 /*
 * check 函数中 p, q 为当前的节点
 */

#include <stdbool.h>
#include <stdio.h>

bool check(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }

    // 一个为空，一个不为空
    if (p == NULL || q == NULL)
    {
        return false;
    }

    if (p->val != q->val)
    {
        return false;
    }

    // 最后递归检查两部分
    return check(p->left, q->right) && check(p->right, q->left);
}

bool isSymmetric(struct TreeNode* root)
{
    // 检查
    return check(root, root);
}