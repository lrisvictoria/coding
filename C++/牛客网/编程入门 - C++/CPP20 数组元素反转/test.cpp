#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����������� 6 ������������Щ���ݱ��浽�����У��Ƚ�������Ԫ�ذ��ո�ʽ�����
Ȼ���ٽ�����Ԫ�ط�ת������ո�ʽ�ٴ��������Ԫ�ء�
����������
����������� 6 ������
���������
��һ�ΰ��ո�ʽ���������Ԫ�أ�ÿ��Ԫ���м�ʹ�ö��źͿո����������ʹ����������������
���磺[5, 12, 80, 7, 15, 60]
�ڶ��ΰ��ո�ʽ�����ת��������Ԫ�أ�ÿ��Ԫ���м�ʹ�ö��źͿո����������ʹ����������������
���磺[60, 15, 7, 80, 12, 5]
ʾ��1
���룺
5
12
80
7
15
60
�����
[5, 12, 80, 7, 15, 60]
[60, 15, 7, 80, 12, 5]
*/

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };

    int len = sizeof(arr) / sizeof(int);

    int left = 0, right = len - 1;

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << "[";
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }

    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }

    cout << "[";
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }

    return 0;
}