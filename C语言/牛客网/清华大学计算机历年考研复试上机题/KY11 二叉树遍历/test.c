#define _CRT_SECURE_NO_WARNINGS 1 

//描述
//编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）。
//例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树。建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果。
//输入描述：
//输入包括1行字符串，长度不超过100。
//输出描述：
//可能有多组测试数据，对于每组数据， 输出将输入字符串建立二叉树后中序遍历的序列，每个字符后面都有一个空格。 每个输出结果占一行。
//示例1
//输入：
//abc##de#g##f###
//输出：
//c b e g d f a

#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* rebuildTree(char* str, int* i)
{
    // 如果 str 为 # 说明无序构建，直接返回空
    // 这里我犯了好几次错误
    // 1. 直接*str得到字符串，程序挂掉
    // 2. 直接i++，程序挂掉
    if (str[*i] == '#')
    {
        (*i)++;
        return NULL;
    }

    // 否则创建节点，构建树
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    // 这里可以检查一下，否则会vs会报警告
    root->data = str[(*i)++];
    // 递归处理左右子树
    root->left = rebuildTree(str, i);
    root->right = rebuildTree(str, i);

    return root;
}

void InOrder(struct TreeNode* root)
{
    if (root == NULL)
    {
        return;
    }

    InOrder(root->left);
    printf("%c ", root->data);
    InOrder(root->right);
}
int main()
{
    // 创建一个字符数组
    char str[101];
    scanf("%s", str);
    int i = 0;

    // 重构树，这里需要地址
    struct TreeNode* root = rebuildTree(str, &i);
    // 中序遍历
    InOrder(root);

    return 0;
}