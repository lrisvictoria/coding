#define _CRT_SECURE_NO_WARNINGS 1 

/*

��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��

ʾ�� 1��

���룺s = "We are happy."
�����"We%20are%20happy."

*/

char* replaceSpace(char* s)
{
    int count = 0;
    int len = strlen(s);
    char* tmp = s;

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

    int end = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            ans[end++] = '%';
            ans[end++] = '2';
            ans[end++] = '0';
        }
        else
        {
            ans[end++] = s[i];
        }
    }
    ans[end] = '\0';
    return ans;
}