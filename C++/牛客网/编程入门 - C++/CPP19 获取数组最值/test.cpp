#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����������� 6 ������������Щ���ݱ��浽�����У���ȡ�����е���Сֵ�����ֵ�������
����������
����������� 6 ������
���������
��������е���Сֵ�����ֵ������ֵ�м�ʹ�ÿո����
ʾ��1
���룺
5
12
80
7
15
60
�����
5 80
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    int max = 0, min = 100;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max;
    return 0;
}