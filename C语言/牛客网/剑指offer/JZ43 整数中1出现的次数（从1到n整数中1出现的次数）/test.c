#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����һ������ n ���� 1��n �� n ��������ʮ���Ʊ�ʾ�� 1 ���ֵĴ���
���磬 1~13 �а��� 1 �������� 1 �� 10 �� 11 �� 12 �� 13 ��˹����� 6 ��

ע�⣺11 �������������

���ݷ�Χ�� 1 \le n \le 30000 \1��n��30000
���ף��ռ临�Ӷ� O(1) \O(1)  ��ʱ�临�Ӷ� O(lognn) \O(lognn)
ʾ��1
���룺
13
����ֵ��
6
ʾ��2
���룺
0
����ֵ��
0
*/

int NumberOf1Between1AndN_Solution(int n) {
    int count = 0;
    while (n)
    {
        int m = n;//����һ�ݣ�����n��1�ĸ���
        while (m)
        {
            if (m % 10 == 1)
            {
                count++;
            }
            m /= 10;//m�������ı�n
        }
        n--;//n�𽥼���
    }
    return count;
}