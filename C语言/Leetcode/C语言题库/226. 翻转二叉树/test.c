#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。

 

示例 1：



输入：root = [4,2,7,1,3,6,9]
输出：[4,7,2,9,6,3,1]
示例 2：



输入：root = [2,1,3]
输出：[2,3,1]
示例 3：

输入：root = []
输出：[]
 

提示：

树中节点数目范围在 [0, 100] 内
-100 <= Node.val <= 100
*/

struct TreeNode* invertTree(struct TreeNode* root)
{
    // 如果 root 为空，直接返回
    if (root == NULL)
    {
        return NULL;
    }

    // 使用后序遍历的思想，找到最后的左右子树
    // 交换它们的左右孩子

    // 记录值，防止重复递归
    struct TreeNode* left = invertTree(root->left);
    struct TreeNode* right = invertTree(root->right);

    root->left = right;
    root->right = left;

    // 每次递归返回的就是翻转后的子树
    return root;
}