#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Bubblesort(int arr[],int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { -3,6,9,3,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC39 ����ǰ����
//���룺���У���һ������һ����������ʾn��ѧ����>=5����
// �ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100)
//6
//99 45 78 67 72 88
//˼·����ð�����򣬺ܼ�
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[100];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//BC40 ��ѡ�糤
//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B��
// ����ÿ��ͬѧ���벢��ֻ��ͶһƱ��
// ���յ�Ʊ�����Ϊ�糤.
//���룺һ�У��ַ����У�����A��B���������ַ�0������
//һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬
//���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
//ABBABBAAB0
//B 
//˼·�����������ѭ�������ж�����
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s", &str);
    //int len = strlen(str);
    int len = sizeof(str) / sizeof(str[0]);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A')
        {
            count1++;
        }
        else if(str[i] == 'B')
        {
            count2++;
        }
        else
        {
            break;
        }
    }
    if (count1 > count2)
    {
        printf("A");
    }
    else if (count1 < count2)
    {
        printf("B");
    }
    else
    {
        printf("E");
    }
    return 0;
}