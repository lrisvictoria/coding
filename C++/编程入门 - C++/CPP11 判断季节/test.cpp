#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����¼��һ���·� month���ж������ĸ����ڡ���3 - 5 ��Ϊ������6 - 8 ��Ϊ�ļ���9 - 11 ��Ϊ�＾��12��1��2 ��Ϊ������
����������
��������һ���·���������Χ�� 1 - 12
���������
�����Ӧ�·ݵļ��ڣ�3 - 5 ��Ϊ������6 - 8 ��Ϊ�ļ���9 - 11 ��Ϊ�＾��12��1��2 ��Ϊ���������������·ݲ��� 1 - 12������������Ϸ�����
ʾ��1
���룺
3
�����
����
ʾ��2
���룺
7
�����
�ļ�
ʾ��3
���룺
10
�����
�＾
ʾ��4
���룺
12
�����
����
*/

#include <iostream>
using namespace std;

int main()
{

    int month;
    cin >> month;

    if (month >= 1 && month <= 12)//�Ϸ�
    {
        if (month >= 3 && month <= 5)
            cout << "����" << endl;
        else if (month >= 6 && month <= 8)
            cout << "�ļ�" << endl;
        else if (month >= 9 && month <= 11)
            cout << "�＾" << endl;
        else//����
            cout << "����" << endl;
    }
    else//���Ϸ�
    {
        cout << "���Ϸ�" << endl;
    }
    return 0;
}