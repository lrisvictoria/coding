#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����һ������ 1 ���������ж����ǲ�������(����)��
����������
����һ������ 1 ������
���������
���������Ƿ������������������������������������������������������
ʾ��1
���룺
2
�����
������
*/

//��ƽ��
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (!(num % i))
        {
            cout << "��������" << endl;
            return 0;
        }
    }
    cout << "������" << endl;
    return 0;
}