#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
��������һ�� int ���͵������� n��n �ķ�ΧΪ[1, 1000]���� 1 - n ֮��ż���ĺͣ��������
����������
��������һ�� int ���͵���������n �ķ�ΧΪ[1, 1000]
���������
��� 1 - n ֮��ż���ĺ�
ʾ��1
���룺
4
�����
6
ʾ��2
���룺
10
�����
30
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!(i % 2))
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}