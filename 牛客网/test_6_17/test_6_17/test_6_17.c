#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//BC36 ��������
//BMIָ��������������ָ�����������ع����������������ƽ���ó������֣�
//��Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿���һ����׼��
//���磺һ���˵����Ϊ1.75�ף�����Ϊ68ǧ�ˣ�
// ����BMI=68/(1.75^2)=22.2��ǧ��/��^2����
//��BMIָ��Ϊ18.5��23.9ʱ��������
//�����ʾ������ڽ������ա�����ж����彡�������
//���룺68 1.75
//�����Normal
//67.5 1.65
//Abnormal
#include<stdio.h>
int main()
{
    int weight;
    float height;
    scanf("%d %f", &weight, &height);
    float BMI;
    BMI = weight / (height * height);
    if (BMI >= 18.5 && BMI <= 23.9)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Abnormal\n");
    }
    return 0;
}