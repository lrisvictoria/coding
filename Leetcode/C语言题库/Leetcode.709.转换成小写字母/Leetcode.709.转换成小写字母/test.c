#define _CRT_SECURE_NO_WARNINGS 1 

/*����һ���ַ��� s �������ַ����еĴ�д��ĸת������ͬ��Сд��ĸ�������µ��ַ�����*/

/*
���룺s = "Hello"
�����"hello"
*/

//plan1���������
//char* toLowerCase(char* s) {
//    int len = strlen(s);
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] >= 'A' && s[i] <= 'Z')
//        {
//            s[i] += 32;
//        }
//    }
//    return s;
//}

//plan2���⺯��
//tolower������д��ĸת��ΪСд
//char* toLowerCase(char* s) {
//    int len = strlen(s);
//    for (int i = 0; i < len; i++)
//    {
//        s[i] = tolower(s[i]);
//    }
//    return s;
//}
//plan3��������д����vs���ǿ��Եģ����Ƕ��������ǲ��е�
//���ص���p�ĵ�ַ���Ҹı���p��ָ�򣬾�ָ����\0����ʱ���ӡ�ͳ�����
//����������һ��ָ��������������Ԫ�ص�ַ����󷵻�����ĵ�ַ

//����ʾ����
//#include<stdio.h>
//char* toLowerCase(char* s) {
//
//    while (*s != '\0')
//    {
//        if (*s >= 'A' && *s <= 'Z')
//        {
//            *s += 32;
//        }
//        s++;//�ı�ָ��
//    }
//    return s;//ָ��\0
//}
//int main()
//{
//    char arr[] = "abCdEf";
//    int*p = toLowerCase(arr);
//    printf("%s\n", p);//��ӡΪ��
//    return 0;
//}
char* toLowerCase(char* s) {
    char* str = s;
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
        }
        str++;
    }
    return s;
}