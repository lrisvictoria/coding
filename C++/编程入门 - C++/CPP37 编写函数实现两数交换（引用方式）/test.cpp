#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
��дһ��������ʵ�����������Ľ�����Ҫ��������õķ�ʽʵ�֡�
����������
�������� 2 ������ m �� n
���������
��������� m �� n ��ֵ���м�ʹ�ÿո����
ʾ��1
���룺
10
20
�����
20 10
*/

#include <iostream>
using namespace std;

void Swap(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {

    int m, n;
    cin >> m;
    cin >> n;

    Swap(m, n);


    cout << m << " " << n << endl;

    return 0;
}