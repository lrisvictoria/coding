#define _CRT_SECURE_NO_WARNINGS 1 

//ϰ��5 - 3 ʹ�ú������������ľ���
//���� 10
//���� C�γ���
//��λ �㽭��ѧ
//����Ҫ��ʵ��һ���������Ը���ƽ��������������(x1, y1)��(x2, y2)����������֮��ľ��롣
//
//�����ӿڶ��壺
//double dist(double x1, double y1, double x2, double y2);
//�����û�����Ĳ���Ϊƽ���������������(x1, y1)��(x2, y2)������distӦ���������ľ��롣
//
//���в��Գ���������
#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
//����������
//10 10 200 100
//���������
//dist = 210.24

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));//������ʵ�ܼ򵥣�������Ҫ��˼·
}