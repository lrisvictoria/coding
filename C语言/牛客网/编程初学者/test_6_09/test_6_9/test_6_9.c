 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Max(a, b);
//	printf("%d\n", c);
//}
//BC24 �ܳɼ���ƽ���ּ���
//79.5 80.0 98.0
//257.50 85.83
//int main()
//{
//    float score[3];
//    float sum = 0.0;//�����Ϊû�г�ʼ�������������
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%f", &score[i]);//ֻҪ�����Ok�����ȿ�ʼ����.1f
//        sum += score[i];
//    }
//    printf("%.2f %.2f", sum, sum / 3.0);//.2�����������
//    return 0;
//}
//BC25 ��������ָ��
// BMI = weight/(height/100)^2
#include<stdio.h>
int main()
{
    int weight, height;
    float c = 0.0;
    scanf("%d %d", &weight, &height);
    c = (float)height / 100;//ǿ������ת����int��
    c *= c;//ƽ��
    c = weight / c;//BMI
    printf("%.2f", c);//.2����λ��
    return 0;
}