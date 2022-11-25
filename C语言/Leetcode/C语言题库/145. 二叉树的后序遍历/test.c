#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一棵二叉树的根节点 root ，返回其节点值的 后序遍历 。

示例 1：

输入：root = [1,null,2,3]
输出：[3,2,1]
示例 2：

输入：root = []
输出：[]
示例 3：

输入：root = [1]
输出：[1]
 

提示：

树中节点的数目在范围 [0, 100] 内
-100 <= Node.val <= 100

*/

void posOrderSave(struct TreeNode* root, int* ans, int* returnSize)
{
    // 如果遇到空，则返回
    if (root == NULL)
    {
        return;
    }

    posOrderSave(root->left, ans, returnSize);
    posOrderSave(root->right, ans, returnSize);
    ans[(*returnSize)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* ans = (int*)malloc(sizeof(int) * 2000);
    *returnSize = 0;
    posOrderSave(root, ans, returnSize);
    return ans;
}