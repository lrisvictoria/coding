#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����ָ����BMI��������������֯��WHO���Ƽ�����ͳһʹ�õķ��ַ��ͱ�׼����BMI�����أ����2��kg/m2����
С�� 18.5 ����"ƫ��"�����ڵ��� 18.5 С�� 20.9 ����"����"�����ڵ��� 20.9 С�ڵ��� 24.9 ����"����"������ 24.9 ����"ƫ��"��
������������дһ���߼��������û�����ߺ����أ��������Ӧ������ָ�������������ǵ����״̬��
����������
�û�����ߣ�m�����û������أ�kg��
���������
����ָ����Ӧ�����״̬��ƫ�ݣ����������У�ƫ�֡�
ʾ��1
���룺
62.5
1.75
�����
����
*/

#include <iostream>
#include <tgmath.h>//pow��������
using namespace std;

int main() {

    double weight;
    double height;

    cin >> weight;
    cin >> height;

    // write your code here......
    double BMI = weight / pow(height, 2);
    if (BMI < 18.5)
        cout << "ƫ��" << endl;
    else if (BMI >= 18.5 && BMI < 20.9)
        cout << "����" << endl;
    else if (BMI >= 20.9 && BMI < 24.9)
        cout << "����" << endl;
    else
        cout << "ƫ��" << endl;

    return 0;
}