#define _CRT_SECURE_NO_WARNINGS 1 
//BC119 С�������ַ���
//����Ӵ�CHN�ĸ���
//���涨�Ӵ���Ҫ����һ�飬�ɷֿ�
//#include<stdio.h>
//int main()
//{
//	char arr[8000];
//	scanf("%s", arr);
//	int c = 0;
//	int ch = 0;
//	int chn = 0;
//	char* p = arr;//arrΪ��Ԫ�ص�ַ
//	while (*p)
//	{
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//			ch += c;
//		else if (*p == 'N')
//			chn += ch;
//	}
//	printf("%d\n", chn);
//	return 0;
//}
//BC121 С����ѧ���
//#include<stdio.h>
//int main()
//{
//    printf("Practice makes perfect!");
//    return 0;
//}
//BC122 С������ƽ����
//#include<stdio.h>
//int main()
//{
//    double arr[3] = { 0 };
//    double sum = 0.0;
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%lf", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%.2lf %.2lf", sum, sum / 3.0);
//    return 0;
//}
//BC123 С�����������
//#include<stdio.h>
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];
//    for (i = 1; i < 4; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf("%d\n", max);
//}
//BC124 С�����Ƿ񱻽мҳ�
//#include<stdio.h>
//int main()
//{
//    int arr[3] = { 0 };
//    int sum = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    if (sum / 3 >= 60)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}