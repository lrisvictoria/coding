#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ʵ��һ�����������ַ����е�ÿ���ո��滻��"%20"��

���ݷ�Χ
0�� �����ַ����ĳ��� ��1000��
ע������ַ����ĳ��ȿ��ܴ��� 1000��

����
���룺"We are happy."

�����"We%20are%20happy."
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
* �����ַ��������ٶ���ռ�
* ��ͷ��β����ԭ�ַ���
* ����������
* ����ǿո���%20��������
*/
char* replaceSpaces(char* str)
{
    char* tmp = str;
    int len = strlen(str);
    int count = 0;
    while (*tmp)
    {
        if (*tmp == ' ')
        {
            count++;
        }
        tmp++;
    }
    int newlen = len + 2 * count + 1;
    char* ans = (char*)malloc(sizeof(char) * newlen);
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            ans[k++] = '%';
            ans[k++] = '2';
            ans[k++] = '0';
        }
        else
        {
            ans[k++] = str[i];
        }
    }
    return ans;
}