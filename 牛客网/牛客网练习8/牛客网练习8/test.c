#define _CRT_SECURE_NO_WARNINGS 1 
//BC88 ħ�����ֱ任
//3
//7
//˵����3->10->5->16->8->4->2->1���ܹ���Ҫ7��
//#include<stdio.h>
//int magic_change(int num)
//{
//    int count = 0;
//    while (num != 1)
//    {
//        if (num % 2 == 0)
//        {
//            num /= 2;
//            count++;
//        }
//        else
//        {
//            num = num * 3 + 1;
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = magic_change(n);
//    printf("%d\n", ret);
//    return 0;
//}
//BC89 ��������9����
//˵����һ�У�һ����������ʾ1~2019�й��ж��ٸ�����������9��

//plan1�����
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    for (int i = 1; i <= 2019; i++)
//    {
//        if ((i % 10) == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//plan2��ѭ��
//#include<stdio.h>
//int num_nine()
//{
//    int i = 1;
//    int count = 0;
//    while (i <= 2019)
//    {
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            m /= 10;
//        }
//        i++;
//    }
//    return count;
//}
//int main()
//{
//    int ret = num_nine();
//    printf("%d\n", ret);
//    return 0;
//}
//BC91 ˮ�ɻ���
//153 = 1^3 + 5^3 + 3^3
//���������ж��飬ÿ��ռһ�У�������������m��n
//��С���������û�����no
//100 120
//300 380
//no
//370 371
#include<stdio.h>
#include<math.h>
void Narcissus(int x, int y)
{
    int i = 0;
    int flag = 0;
    for (i = x; i <= y; i++)
    {
        int j = 0;
        int sum = 0;
        for (j = i; j > 0; j /= 10)
        {
            sum += pow(j % 10, 3);
        }
        if (i == sum)
        {
            printf("%d ", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("no\n");
    }
}
int main()
{
    int m = 0;
    int n = 0;
    while (scanf("%d %d", &m, &n) == 2)
    {
        Narcissus(m, n);
    }
    return 0;
}
//BC96 [NOIP2015]���
//6
//14
//��ʿ��һ���յ�һö��ң��ڶ���͵����죬ÿ���յ���ö��ң����ġ��塢���죬ÿ���յ���ö��ҡ����һ���յ�1+2+2+3+3+3=14ö��ҡ�
//#include<stdio.h>
//int main()
//{
//    int day = 0;//����
//    scanf("%d", &day);
//    int sum = 0;//��Һ�
//    int count = 0;
//    int i = 1;
//    while (1)//����ÿ������
//    {
//        int j = 1;
//        while (j <= i)//�����ܺ�
//        {
//            sum += i;
//            count++;// ͳ������
//            if (count == day)
//                goto result;//�����ͼ�������ȣ�����ѭ��
//            j++;
//        }
//        i++;
//    }
//result:
//    printf("%d\n", sum);
//    return 0;
//}