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

// 镜像判断
//bool check(struct TreeNode* p, struct TreeNode* q)
//{
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//
//    // 一个为空，一个不为空
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//
//    if (p->val != q->val)
//    {
//        return false;
//    }
//
//    // 最后递归检查两部分
//    return check(p->left, q->right) && check(p->right, q->left);
//}
//
//bool isSymmetric(struct TreeNode* root)
//{
//    // 检查
//    return check(root, root);
//}

// 翻转左子树，左右子树判断是否相等


struct TreeNode* invertTree(struct TreeNode* root)
{
    if (root == NULL)
    {
        return NULL;
    }

    struct TreeNode* left = invertTree(root->left);
    struct TreeNode* right = invertTree(root->right);

    root->left = right;
    root->right = left;

    return root;
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }

    if (p == NULL || q == NULL)
    {
        return false;
    }

    if (p->val != q->val)
    {
        return false;
    }

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
bool isSymmetric(struct TreeNode* root)
{
    // 左右子树都为空
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }

    // 左右子树一边不为空
    if (root->left == NULL || root->right == NULL)
    {
        return false;
    }

    // 左右子树两边都不为空
    struct TreeNode* left, * right;
    if (root->left && root->right)
    {
        // 翻转左边
        left = invertTree(root->left);
        right = root->right;
    }

    // 和右边子树比较，返回 bool 值
    return isSameTree(left, right);
}