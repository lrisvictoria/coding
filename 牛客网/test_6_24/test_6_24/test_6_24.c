#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//BC26 ���������ε��ܳ������
//���룺�����ߣ��ÿո����
//������ܳ������(������λС��)
//3 3 3
//circumference=9.00 area=3.90
//˼·��������ú��׹�ʽ
//S=��p(p-a)(p-b)(p-c)
//p=(a+b+c)/2
//��ƽ�� - sqrt - double sqrt(double x);
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double circumference = 0.0;
//    circumference = a + b + c;
//    double p = circumference / 2;
//    double area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2lf area=%.2lf", circumference, area);
//    return 0;
//}
//BC50 ���㵥λ��Ծ����
//�������� ÿ������һ��t
//t>0 - 1
//t=0 - 0.5
//t<0 - 0
//#include<stdio.h>
//int main()
//{
//    int t;
//    while (scanf(" %d", &t) == 1)
//    {
//        if (t > 0)
//        {
//            printf("1\n");
//        }
//        else if (t == 0)
//        {
//            printf("0.5\n");
//        }
//        else
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}
//BC51 �������ж�
//���������ߣ�����ܹ��������Σ�
//�ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//���룺�������룬�������֣��ÿո�ֿ�
//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ�
//�ȱ��������������Equilateral triangle!����
//�����������������Isosceles triangle!����
//������������������Ordinary triangle!����
//��֮�����Not a triangle!����
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if ((a + b > c) && (a + c > b) && (b + c) > a)
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}
//���գ���ӡeof�ķ���ֵ
//int main()
//{
//    printf("%d\n", EOF);
//}
//BC52 �����������ݳ̶�
//BMI ������̸ ���Ŷ�֪��
//���룺�������� ����(kg) ���(cm)
//�������������
//<18.5 - Underweight
//>=18.5&&<=23.9 - Normal
//>23.8&&<=27.9 - Overweight
//>27.9 - Obese
//#include<stdio.h>
//int main()
//{
//    double weight = 0.0;
//    double height = 0.0;
//    double BMI = 0.0;
//    while (scanf("%lf %lf", &weight, &height) == 2)
//    {
//        BMI = weight / ((height / 100) * (height / 100));
//        if (BMI < 18.5)
//            printf("Underweight\n");
//        else if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        else if (BMI > 23.9 && BMI <= 27.9)
//            printf("Overweight\n");
//        else
//            printf("Obese\n");
//    }
//    return 0;
//}
//BC53 ����һԪ���η���
//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�,
//��a = 0ʱ�������Not quadratic equation����
//��a �� 0ʱ�����ݡ� = b2 - 4*a*c������������㲢������̵ĸ���
//���룺�������룬һ���������������ո�ָ�
//���ÿ�����룬���һ�У����һԪ���η���ax2 + bx +c = 0�ĸ��������
//���a = 0�������Not quadratic equation����
//���a ��  0�������������
//�� = 0��������ʵ����ȣ������ʽΪ��x1 = x2 = ...��
//�� > 0��������ʵ�����ȣ������ʽΪ��x1 = ...; x2 = ...������x1 <= x2��
//�� < 0����������������������x1 = ʵ�� - �鲿i; x2 = ʵ�� + �鲿i��
//��x1���鲿ϵ��С�ڵ���x2���鲿ϵ����ʵ��Ϊ0ʱ����ʡ�ԡ�
//ʵ�� = -b / (2 * a), �鲿 = sqrt(-��) / (2 * a)
//����ʵ������Ҫ��ȷ��С�����2λ�����֡�����֮��û�пո�
//*****************************************************
//ע���1��0û������
//ע���2��˫�ط��Ų���ȡ
//#include<stdio.h>
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    double x1 = 0.0;
//    double x2 = 0.0;
//    while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
//    {
//        double n = (b * b) - (4 * a * c);
//        if (a != 0)
//        {
//            if (n == 0)
//            {
//                x1 = -b / (2 * a);
//                //0û�з���
//                if (b == 0)
//                    printf("x1=x2=%.2lf\n", 0);
//                else
//                    printf("x1=x2=%.2lf\n", x1);
//            }
//            else if (n > 0)
//            {
//                x1 = (-b - sqrt(n)) / (2 * a);
//                x2 = (-b + sqrt(n)) / (2 * a);
//                printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
//            }
//            else
//            {
//                double real = -b / (2 * a);
//                double dash = sqrt(-n) / (2 * a);
//                //dashΪ��ʱ�����ڽ�������������ŵĴ����ʾ
//                if (dash < 0)
//                    dash = -dash;
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, dash, real, dash);
//            }
//        }
//        else
//            printf("Not quadratic equation\n");
//    }
//    return 0;
//}
//BC54 ����·�����
//����:�������룬��ʾ��ݺ��·ݣ��ÿո�ָ���
//2008 2
//29
int main()
{
    int year, month;
    while (scanf("%d %d", &year, &month) == 2)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            printf("%d\n", 31);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            printf("%d\n", 30);
        else
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                printf("%d\n", 29);
            else
                printf("%d\n", 28);
        }
    }
    return 0;
}