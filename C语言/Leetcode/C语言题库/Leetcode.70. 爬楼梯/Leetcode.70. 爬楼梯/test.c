#define _CRT_SECURE_NO_WARNINGS 1 
/*
����������¥�ݡ���Ҫ n ������ܵ���¥����

ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
*/

/*
���룺n = 2
�����2
���ͣ������ַ�����������¥����
1. 1 �� + 1 ��
2. 2 ��
*/

int climbStairs(int n) {
    int a = 1;
    int b = 2;
    int c = 0;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else
        return c;
}