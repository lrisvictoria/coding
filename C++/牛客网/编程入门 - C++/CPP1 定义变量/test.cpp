#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
��˳��ֱ���char��int��long��double���͵ı���������sizeof()��������⼸���������ڴ�����ռ�õ��ֽ�����
����������
�û���˳��ֱ���char��int��long��double���͵ı�����
���������
����⼸���������ڴ�ռ�ô�С��
ÿ��ռһ�У���ʽ���£�
xxx
yyy
zzz
...
������xxx��yyy��zzz������������
*/

#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(double) << endl;
    return 0;
}