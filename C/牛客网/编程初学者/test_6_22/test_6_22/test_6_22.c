#define _CRT_SECURE_NO_WARNINGS 1 
//BC42 �����ɼ�
//KiKi��֪�����Ŀ��Գɼ��Ƿ�������������жϡ�
//�Ӽ�������һ��������ʾ�ĳɼ���
//����жϳɼ��Ƿ���90~100֮�䣬������������Perfect����
//�����������������룬ÿ���������һ��������ʾ�ĳɼ���90~100����
//98
//perfect
#include<stdio.h>
int main()
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        if (num >= 90 && num <= 100)
        {
            printf("Perfect\n");
        }
    }
    return 0;
}