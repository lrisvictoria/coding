#define _CRT_SECURE_NO_WARNINGS 1 
//����
//��֤��Ƴ�˹���������κ�һ������m������������д��m����������֮�͡�
//
//���磺
//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//����һ��������m��m��100������m������д��m����������֮�͵���ʽ�����
//
//����������
//����һ��int����
//
//���������
//����ֽ���string

//ʾ��1
//���룺
//6
//�����
//31 + 33 + 35 + 37 + 39 + 41

#include<stdio.h>
#include<math.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = (num - 1) * num + 1; sum != pow(num, 3); j += 2)
        {
            printf("%d", j);
            sum += j;
            if (sum != pow(num, 3))
                printf("+");
        }
    }
    return 0;
}