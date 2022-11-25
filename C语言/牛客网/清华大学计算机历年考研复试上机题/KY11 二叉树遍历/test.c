#define _CRT_SECURE_NO_WARNINGS 1 

//����
//��һ�����򣬶����û������һ����������ַ��������ݴ��ַ�������һ������������ָ�뷽ʽ�洢����
//�������µ���������ַ����� ABC##DE#G##F### ���С�#����ʾ���ǿո񣬿ո��ַ����������������˶������Ժ��ٶԶ������������������������������
//����������
//�������1���ַ��������Ȳ�����100��
//���������
//�����ж���������ݣ�����ÿ�����ݣ� ����������ַ���������������������������У�ÿ���ַ����涼��һ���ո� ÿ��������ռһ�С�
//ʾ��1
//���룺
//abc##de#g##f###
//�����
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
    // ��� str Ϊ # ˵�����򹹽���ֱ�ӷ��ؿ�
    // �����ҷ��˺ü��δ���
    // 1. ֱ��*str�õ��ַ���������ҵ�
    // 2. ֱ��i++������ҵ�
    if (str[*i] == '#')
    {
        (*i)++;
        return NULL;
    }

    // ���򴴽��ڵ㣬������
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    // ������Լ��һ�£������vs�ᱨ����
    root->data = str[(*i)++];
    // �ݹ鴦����������
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
    // ����һ���ַ�����
    char str[101];
    scanf("%s", str);
    int i = 0;

    // �ع�����������Ҫ��ַ
    struct TreeNode* root = rebuildTree(str, &i);
    // �������
    InOrder(root);

    return 0;
}