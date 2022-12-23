/*
����
�뿼������
����������
һ������N
���������
С��N����������
ʾ��1
���룺
10
����
�����
4
����
˵����
N=10�������� [2, 3, 5, 7]
��ע��
0��1 ������������
*/

// for ѭ���� 3 ��ʼ������
// ѭ���д� 3 ��ʼ�������� sqrt(n)
// ����ѭ������
// �������
// ��һ����������

#include <iostream>
#include <cmath>

using namespace std;

void isprime(int n, int& cnt)
{
    bool flag = true;
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cnt++;
    }
}

int main()
{
    int n, cnt = 1;
    cin >> n;

    // �� 3 ��ʼ
    for (int i = 3; i < n; i += 2) {
        isprime(i, cnt);
    }

    cout << cnt << endl;

    return 0;
}