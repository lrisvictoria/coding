#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
ʵ�ֽ�������int���ͱ�����ֵ
����������
a������b������ֵ��Ҫ����int���͵�ֵ
���������
������a������b������ֵ
ʾ��1
���룺
1
2
�����
2 1
����
ʾ��2
���룺
10
10
�����
10 10
ʾ��3
���룺
100
20
�����
20 100
*/

#include <iostream>
using namespace std;
void swap(int& m, int& n)//����
{
    int tmp = m;
    m = n;
    n = tmp;
}
int main() {

    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;

    //write your code here.......

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}