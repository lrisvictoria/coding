#define _CRT_SECURE_NO_WARNINGS 1 

//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
//
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
//
//���ݷ�Χ
//��ά������Ԫ�ظ�����Χ[0, 1000]
//����
//�������飺
//
//[
//	[1, 2, 8, 9]��
//	[2, 4, 9, 12]��
//	[4, 7, 10, 13]��
//	[6, 8, 11, 15]
//]
//
//������������ֵΪ7���򷵻�true��
//
//������������ֵΪ5���򷵻�false��

// �����Ͻǿ�ʼ����
// ����Ԫ�� > target col--
// ����Ԫ�� < target row++
// ����Ԫ�ص��� target return true

#include <stdbool.h>

bool searchArray(int** array, int arrayRowSize, int arrayColSize, int target)
{
    int row = 0;
    int col = arrayColSize - 1;

    while (row <= arrayRowSize - 1 && col >= 0)
    {
        if (array[row][col] > target)
            col--;
        else if (array[row][col] < target)
            row++;
        else
            return true;
    }
    return false;
}