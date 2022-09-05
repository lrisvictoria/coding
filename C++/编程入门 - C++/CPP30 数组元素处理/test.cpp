#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
��һ������ int arr[n]��Ҫ��дһ��������void func(int *p, int n);������ arr ��Ϊ 0 ��Ԫ�ض���������ĩβ������ 0 ��Ԫ��������ʼ������ԭ����˳�򲻱䣩��
���磺
������Ԫ��ԭ���ǣ�1 0 3 4 0 -3 5
���� func �����1 3 4 -3 5 0 0
����������
�������� 6 �����������浽������
���������
���� func ����������Ԫ�أ�Ԫ�غ�Ԫ��֮��ʹ�ÿո����
���磺1 3 4 -3 5 0 0
ʾ��1
���룺
1
0
3
4
0
-3
�����
1 3 4 -3 0 0
*/

//����
//#include <iostream>
//using namespace std;
//
//void func(int* p, int n);
//
//int main() {
//
//    int arr[6] = { 0 };
//    for (int i = 0; i < 6; i++) {
//        cin >> arr[i];
//    }
//
//    func(arr, 6);
//
//    for (int i = 0; i < 6; i++) {
//        if (i == 5) {
//            cout << arr[i] << endl;
//        }
//        else {
//            cout << arr[i] << " ";
//        }
//    }
//
//    return 0;
//}
//
//void func(int* p, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (!p[i])
//        {
//            for (int j = i; j < n - 1; j++)
//            {
//                p[j] = p[j + 1];
//            }
//            p[n - 1] = 0;
//            n--;
//        }
//    }
//}

//˫ָ��
#include <iostream>
using namespace std;

void func(int* p, int n);

int main() {

    int arr[6] = { 0 };
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    func(arr, 6);

    for (int i = 0; i < 6; i++) {
        if (i == 5) {
            cout << arr[i] << endl;
        }
        else {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

void func(int* p, int n)
{
    int left = 0, right = 0;//��ָ������0����ָ������
    while (right < n)
    {
        if (p[right])
        {
            int tmp = p[left];
            p[left] = p[right];
            p[right] = tmp;
            left++;
        }
        right++;
    }
}