#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����������� 6 ������������Щ���ݱ��浽�����У�����ָ����������е�Ԫ�ز���ӡ��
����������
����������� 6 ������
���������
��������е�����Ԫ�أ�ÿ��Ԫ���м�ʹ�ÿո����
���磺10 20 30 40 50 60
ʾ��1
���룺
10
20
30
40
50
60
�����
10 20 30 40 50 60
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int* ptr = arr;

    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}