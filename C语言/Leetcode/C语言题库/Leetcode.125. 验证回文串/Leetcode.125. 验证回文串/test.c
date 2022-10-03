#define _CRT_SECURE_NO_WARNINGS 1 
//����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��
//
//˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���

/*
����: "A man, a plan, a canal: Panama"
���: true
���ͣ�"amanaplanacanalpanama" �ǻ��Ĵ�
*/

/*
����: "race a car"
���: false
���ͣ�"raceacar" ���ǻ��Ĵ�
*/

//������ĸ�����֣���������¼���ַ�����
//������ĸ��СдҲ����˵��Ҫ����ת��

#include<stdbool.h>
bool isPalindrome(char* s) {
    int i = 0;
    int j = 0;
    while (s[i])//��������
    {
        if (isalpha(s[i]) || isdigit(s[i]))//Ϊ��ĸ������
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;//ת����Сд
                s[j++] = s[i];
            }
            else
            {
                s[j++] = s[i];
            }
        }
        i++;
    }
    int left = 0;
    int right = j - 1;//��ʱ��������±�Ϊj-1
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}