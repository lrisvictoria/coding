#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。

示例 1：

输入：root = [1,null,2,3]
输出：[1,3,2]
示例 2：

输入：root = []
输出：[]
示例 3：

输入：root = [1]
输出：[1]
 
提示：

树中节点数目在范围 [0, 100] 内
-100 <= Node.val <= 100

*/

void inOrderSave(struct TreeNode* root, int* ans, int* returnSize)
{
    // 如果遇到空，则返回
    if (root == NULL)
    {
        return;
    }

    inOrderSave(root->left, ans, returnSize);
    ans[(*returnSize)++] = root->val;
    inOrderSave(root->right, ans, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* ans = (int*)malloc(sizeof(int) * 2000);
    *returnSize = 0;
    inOrderSave(root, ans, returnSize);
    return ans;
}