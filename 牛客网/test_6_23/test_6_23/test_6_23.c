#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//BC43 �������
//��������
//>=60 ���Pass �������Fail
//int main()
//{
//	int i;
//	while (scanf("%d", &i) == 1)
//	{
//		if (i >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}
//BC44 �ж�������ż��
//��������
//������Odd ż����Even
//#include<stdio.h>
//int main()
//{
//    int i;
//    while (scanf("%d", &i) == 1)
//    {
//        if (i % 2 == 1)
//        {
//            printf("Odd\n");
//        }
//        else
//        {
//            printf("Even\n");
//        }
//    }
//    return 0;
//}
//BC45 ��߷���
//�����������֣�������ֵ 
//#include<stdio.h>
//int main()
//{
//    int num1, num2, num3;
//    scanf("%d %d %d", &num1, &num2, &num3);
//    int max = 0;
//    if (num1 >= num2 && num1 >= num3)
//    {
//        max = num1;
//    }
//    else if (num2 >= num1 && num2 >= num3)
//    {
//        max = num2;
//    }
//    else
//    {
//        max = num3;
//    }
//    printf("%d\n", max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num1, num2, num3;
//    scanf("%d %d %d", &num1, &num2, &num3);
//    if (num1 > num2)
//    {
//        if (num1 > num3)
//        {
//            printf("%d\n", num1);
//        }
//        else
//        {
//            printf("%d\n", num3);
//        }
//    }
//    else
//    {
//        if (num2 > num3)
//        {
//            printf("%d\n", num2);
//        }
//        else
//        {
//            printf("%d\n", num3);
//        }
//    }
//    return 0;
//}

//BC46 �ж���Ԫ�����Ǹ���
//A(a), E(e), I(i), O(o),U(u)��ΪԪ��
//�������룬ÿ������һ����ĸ��
//A
//b
//Vowel
//Consonant
//������scanf(" %c",&ch)
//��%c��ǰ��дһ���ո��������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
//scanf("%c\n",&ch)//���Ƽ���\n������һ���س���Ч����
//��һ��������Ч��������ͻȻ����tʱ�����ڻ��е�ԭ�򻹻�����ϴεĽ��
//���Բ��Ƽ�
//��%c�ĺ�߷���һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
//����Ϊ�´����¿հ��ַ�������
//#include<stdio.h>
//int main()
//{
//    char ch;
//    char vowel[] = "AaEeIiOoUu";
//    while (scanf("%c\n", &ch) !=EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == vowel[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//        //getchar();//����\n
//    }
//
//    return 0;
//}
//BC47 �ж��ǲ�����ĸ
//�������룬ÿһ������һ���ַ���
//A
//6
//A is an alphabet.
//6 is not an alphabet.
//��һ��������ֱ���ж�
//#include<stdio.h>
//int main()
//{
//    char ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        getchar();
//    }
//    return 0;
//}
//�ڶ����������⺯��isalpha
//�ж��Ƿ�Ϊ��ĸ

//int main()
//{
//    char ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isalpha(ch))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        getchar();
//    }
//    return 0;
//}
//BC48 ��ĸ��Сдת��
//�������룬ÿһ������һ����ĸ��
//a -> A
//A -> a
//Z -> z
//#include<stdio.h>
//int main()
//{
//    char ch;
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch >= 'a' && ch <= 'z')
//        {
//            //ch -= 32;
//            printf("%c\n", ch-32);
//        }
//        else
//        {
//            //ch += 32;
//            printf("%c\n", ch+32);
//        }
//        getchar();//����
//    }
//}
#include <stdio.h>
int main()
{
	char ch = 0;
	char arr[] = "AEIOUaeiou";
	//��%c�ĺ�߷���һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
	//����Ϊ�´����¿հ��ַ�������
	while (scanf("%c\n", &ch) != EOF)
	{
			int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch == arr[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
			printf("Consonant\n");
	}
	return 0;
}
