#define _CRT_SECURE_NO_WARNINGS 1
//BC46�Ĳ�������
//��%s����ȡ�����Բ���getchar()������
//���Ҷ����ַ���aaaaa�����ظ���ӡ
//�����������ǿ���������babbaab
//Ҳ�ǻ����Vowel��
//��Ϊ�Ҽ�������е�Ԫ�أ���Ԫ�����ʹ�ӡVowel
//Ҳ����˵�Ǹ��ݵ������ж��Ƿ���Ԫ��
//#include<stdio.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	char a[] = "AaEeIiOoUu";
//	while (scanf("%s", buf) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (buf[i] == a[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//	}
//}
//BC48�Ĳ�������
//���ÿ⺯��
//islower - �����ĸ�Ƿ�ΪСд
//toupper - Сдת��Ϊ��д
//tolower - ��дת��ΪСд
//#include<stdio.h>
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else
//		{
//			printf("%c\n", tolower(ch));
//		}
//		getchar();
//	}
//}