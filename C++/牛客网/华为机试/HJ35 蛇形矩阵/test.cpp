#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
���ξ�������1��ʼ����Ȼ���������гɵ�һ�������������Ρ�

���磬������5ʱ��Ӧ�������������Ϊ��

1 3 6 10 15

2 5 9 14

4 8 13

7 12

11


����������
����������N��N������100��

���������
���һ��N�е����ξ���

ʾ��1
���룺
4
�����
1 3 6 10
2 5 9
4 8
7
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n)
    {
        int k = 1;//ÿ�е�һ��Ԫ��
        for (int i = 1; i <= n; i++)
        {
            cout << k << " ";//�����һ��Ԫ��
            int tmp = k;
            for (int j = i + 1; j <= n; j++)//�������Ԫ��
            {
                tmp += j;//����
                cout << tmp << " ";
            }
            cout << endl;//����
            k += i;//����
        }
    }
    return 0;
}