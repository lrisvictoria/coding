#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
���һ��ѧ���ṹ�壬�ýṹ�����������Ա���ֱ��ǣ�����name������age�����height��
�����������������������������ݣ������ݱ��浽ѧ���ṹ������ϣ������ѧ����Ϣ��
����������
������������ѧ��������name������age�����height
���������
���ѧ������Ϣ�����磺
���� 20 182.5
ʾ��1
���룺
����
20
182.5
�����
���� 20 182.5
*/

#include <iostream>
#include <string>
using namespace std;

struct student
{
    char name[20];
    int age;
    double height;
};

int main() {

    struct student stu;
    cin >> stu.name >> stu.age >> stu.height;//��������
    cout << stu.name << " " << stu.age << " " << stu.height;//��ʽ����

    return 0;
}