#define _CRT_SECURE_NO_WARNINGS 1 
//BC36 �¶�ת��
//#include<stdio.h>
//int main()
//{
//    float f = 0.0;
//    scanf("%f", &f);
//    printf("%.3f", (5 / 9.0) * (f - 32));
//    return 0;
//}
//BC37 ţţ��Բ
//#include<stdio.h>
//int main()
//{
//    int r = 0;
//    scanf("%d", &r);
//    printf("%.2f", r * r * 3.14);
//    return 0;
//}
//BC38 ţţ�Ĳ�����·
//#include<stdio.h>
//int main()
//{
//    float r1, r2;
//    scanf("%f %f", &r1, &r2);
//    float ret = 0.0;
//    ret = 1.0 / (1.0 / r1 + 1.0 / r2);
//    printf("%.1f", ret);
//    return 0;
//}
//BC39 ţţ��ˮ��
#include<stdio.h>
int main()
{
    int h = 0;
    int r = 0;
    scanf("%d %d", &h, &r);
    float v = 0;
    v = 3.14 * r * r * h;
    int c = 10000;
    int d = 0;
    while (c > 0)
    {
        c = c - v;
        d++;//��¼����
    }
    printf("%d", d);
}