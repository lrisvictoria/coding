#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����¼��һ������ n���� n �Ľ׳ˡ�
n �Ľ׳�Ϊ n * (n - 1) * (n - 2) * ... * 1
����5 �Ľ׳�Ϊ 5 * 4 * 3 * 2 * 1
����������
����¼������һ������ n ����ΧΪ 1 - 20
���������
��������Ľ׳�
ʾ��1
���룺
5
�����
120
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    long long factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}