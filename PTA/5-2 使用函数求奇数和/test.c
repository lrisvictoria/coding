#define _CRT_SECURE_NO_WARNINGS 1 
//ϰ��5 - 2 ʹ�ú�����������
//���� 15
//���� C�γ���
//��λ �㽭��ѧ
//����Ҫ��ʵ��һ������������N�����������������ĺͣ�ͬʱʵ��һ���ж���ż�Եĺ�����
//
//�����ӿڶ��壺
//int even(int n);
//int OddSum(int List[], int N);
//���к���even�������û�����Ĳ���n����ż�Է�����Ӧֵ����nΪż��ʱ����1�����򷵻�0������OddSum������㲢���ش����N������List[]�����������ĺ͡�
//
//���в��Գ���������
#include <stdio.h>

#define MAXN 10

int even(int n);
int OddSum(int List[], int N);

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for (i = 0; i < N; i++) {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
//����������
//6
//2 - 3 7 88 0 15
//���������
//Sum of(-3 7 15) = 19

int even(int n)
{
    return (n % 2 ? 0 : 1);
}
int OddSum(int List[], int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (List[i] % 2)//�ж��Ƿ�Ϊ�棬Ϊ��Ϊ����
            sum += List[i];
    }
    return sum;
}