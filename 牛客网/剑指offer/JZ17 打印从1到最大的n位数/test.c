#define _CRT_SECURE_NO_WARNINGS 1 
//����
//�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
//1. �÷���һ�������б��������ӡ
//2. n Ϊ��������0 < n <= 5
//	
//ʾ��1
//���룺1
//����ֵ��
//[1, 2, 3, 4, 5, 6, 7, 8, 9]

int* printNumbers(int n, int* returnSize)
{
    int sum = 0;
    while (n)//��������λ����Ӧ�����ֵ
    {
        sum += 9 * pow(10, n - 1);
        n--;
    }
    static int arr[100000] = { 0 };
    for (int i = 0; i < sum; i++)//���ֵ-1��Ϊ���������±�
    {
        arr[i] = i + 1;//��1-sum��������
    }
    *returnSize = sum;
    return arr;
}