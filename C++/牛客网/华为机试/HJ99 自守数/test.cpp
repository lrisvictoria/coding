/*
����
��������ָһ������ƽ����β�����ڸ����������Ȼ�������磺25^2 = 625��76^2 = 5776��9376^2 = 87909376�������n(����n)���ڵ��������ĸ���


���ݷ�Χ�� 1 \le n \le 10000 \1��n��10000


����������
int������

���������
n������������������

ʾ��1
���룺
6
����
�����
4
����
˵����
��0��1��5��6���ĸ�������
ʾ��2
���룺
1
����
�����
2
����
˵����
��0, 1������������
*/

#include <iostream>

using namespace std;

void isprotect(int x, int& cnt)
{
    int tmp = x;
    int a = x * x;
    bool flag = true;

    while (tmp) {
        if (tmp % 10 != a % 10) {
            flag = false;
            return;
        }
        tmp /= 10;
        a /= 10;
    }
    if (flag) {
        cnt++;
    }
}

int main()
{
    int n, cnt = 2;
    cin >> n;

    while (n > 1) {
        isprotect(n, cnt);
        n--;
    }

    cout << cnt << endl;

    return 0;
}