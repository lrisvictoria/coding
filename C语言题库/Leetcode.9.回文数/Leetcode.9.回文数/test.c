#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

/*
����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��

��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

���磬121 �ǻ��ģ��� 123 ���ǡ�
*/
bool isPalindrome(int x) {
    if (x < 0)//�������ǻ���
        return false;
    if (x % 10 == 0 && x / 10 == 0)//��λ���ǻ���
        return true;
    int count = 0;
    int m = x;
    while (m)//����λ��
    {
        m /= 10;
        count++;
    }
    while (x)
    {
        if (x % 10 == 0 && x / 10 == 0)//�������һ�κ󣬽��Ϊ��λ����ֱ�ӷ���
            return true;
        int left = x / (int)pow(10, count - 1);//��1221 / 1000
        int right = x % 10;
        if (left != right)
            return false;
        x = x % (int)pow(10, count - 1) / 10;//ȥ����һλ�����һλ
        //��1221 % 1000 = 221 221 / 10 = 22
        count -= 2;//����ȥ����λ��count��Ҫ - 2
    }
    return true;
}