#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����������� 6 ������������Щ���ݱ��浽�����У�
ʹ��ð������������е�Ԫ�ؽ��д�С����˳������
�������������е�Ԫ�أ�Ԫ��֮��ʹ�ÿո��������
����������
����������� 6 ������
���������
�������������е�Ԫ�أ�Ԫ��֮��ʹ�ÿո������
ʾ��1
���룺
24
69
80
57
13
16
�����
13 16 24 57 69 80
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}